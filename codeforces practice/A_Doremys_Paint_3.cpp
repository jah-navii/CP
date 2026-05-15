#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];

        unordered_map<int, int> freq;
        for(int num : nums) freq[num]++;

        if(n <= 2) cout << "Yes\n";
        else {
            int count = 0;
            bool by2 = true;
            for(auto& p : freq){
                count++;
                if(p.second != n/2 && p.second != n/2 + 1) by2 = false;
            }

            if(count > 2) cout << "No\n";
            else if(count == 1) cout << "Yes\n";
            else if(by2 == false) cout << "No\n";
            else cout << "Yes\n";
        } 
    }
}