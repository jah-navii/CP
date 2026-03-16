#include<bits/stdc++.h>
using namespace std;

int smallestBalancedIndex(vector<int>& nums) {
    int n = nums.size();
    vector<long long> sum(n, 0);
    vector<long long> product(n, 1);

    const long long MOD = 1e14;

    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + nums[i-1];
    }

    for(int i = n - 2; i >= 0; i--){
        if(product[i+1] > MOD / nums[i+1]) product[i] = MOD + 1;
        else product[i] = product[i+1] * nums[i+1];
    }

    for(int i = 0; i < n; i++){
        if(sum[i] == product[i]) return i;
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << smallestBalancedIndex(nums) << "\n";
    return 0;
}