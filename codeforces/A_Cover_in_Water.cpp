#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        string s;
        int n;
        cin >> n >> s;

        bool three = false;
        int count = 0;

        for(int j = 0; j < n-2; j++){
            if(s[j] == '.' && s[j+1] == '.' && s[j+2] == '.') three = true;
            else if(s[j] == '.') count++;
        }

        if(s[n-2] == '.') count++;
        if(s[n-1] == '.') count++;

        if(three) cout << 2 << "\n";
        else cout << count << "\n";
    }
}