#include<bits/stdc++.h>
using namespace std;

int minCost(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq1;
    unordered_map<int, int> freq2;
    unordered_map<int, int> freq3;

    for(int num : nums1) {freq1[num]++; freq3[num]++;}
    for(int num : nums2) {freq2[num]++; freq3[num]++;}

    if(freq1 == freq2) return 0;

    for(auto& p : freq3) if(p.second % 2 == 1) return -1;

    int soln = 0;

    for(auto& p : freq3){
        if(freq1[p.first] > p.second/2) soln += freq1[p.first] - p.second/2;
    }

    return soln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums1(n), nums2(n);
    for (int i = 0; i < n; i++) cin >> nums1[i];
    for (int i = 0; i < n; i++) cin >> nums2[i];

    cout << minCost(nums1, nums2) << "\n";
    return 0;
}