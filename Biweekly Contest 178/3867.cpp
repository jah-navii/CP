#include<bits/stdc++.h>
#include <numeric>
using namespace std;

long long gcdSum(vector<int>& nums) {
    int mxi = 0;
    
    vector<int> prefixGcd(nums.size());
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > mxi) mxi = nums[i];
        prefixGcd[i] = gcd(nums[i], mxi);
    } 

    sort(prefixGcd.begin(), prefixGcd.end());

    int left = 0;
    int right = nums.size() - 1;

    long long soln = 0;

    while(left < right){
        soln += gcd(prefixGcd[left], prefixGcd[right]);
        left++;
        right--;
    }

    return soln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << gcdSum(nums) << "\n";
    return 0;
}