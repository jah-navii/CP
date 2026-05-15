#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;

        int k;
        cin >> k;

        vector<int> vec(n, 0);
        for(int i = 0; i < n; i++) cin >> vec[i];

        if(k >= 2) cout << "YES" << "\n";
        else {
            bool found = false;
            for(int i = 1; i < n; i++){
                if(vec[i] < vec[i-1]) found = true;
            }
            if(found) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        }
    }
}
