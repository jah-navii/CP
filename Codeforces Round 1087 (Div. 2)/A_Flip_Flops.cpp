#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, c, k;
        cin >> n >> c >> k;

        vector<long long> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];

        for(int num : nums){
            if(num <= c){
                if(k >= c - num) {
                    k -= c - num;
                    int diff = c - num;
                    c += diff + num;
                } else {
                    c += num + k;
                    k = 0;
                }
            } 
        }

        cout << c << "\n";
    }

    return 0;
}