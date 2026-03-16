#include<bits/stdc++.h>
using namespace std;

vector<int> minDistinctFreqPair(vector<int>& nums) {
    map<int, int> freq;

    for(int num : nums) freq[num]++;

    sort(nums.begin(), nums.end());

    vector<int> soln(2, -1);

    soln[0] = nums[0];

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != soln[0] && freq[nums[i]] != freq[nums[0]]){
            soln[1] = nums[i];
            return soln;
        }
    }

    return {-1, -1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> ans = minDistinctFreqPair(nums);
    cout << ans[0] << " " << ans[1] << "\n";
    return 0;
}

