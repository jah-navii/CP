#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;

        vector<int> nums(n);
        for(int j = 0; j < n; j++) cin >> nums[j];

        if(nums[0] == 1) cout << "Yes\n";
        else cout << "No\n";
    }
}