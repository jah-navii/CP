#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x){
    if(s.length() > x.length()) return false;

    for(int i = 0; i < x.length() - s.length() + 1; i++){
        if(x.substr(i, s.length()) == s) return true;
    }

    return false;
}

int solve(string s, string x){
    for(int i = 0; i <= 5; i++){
        if(check(s, x)) return i;
        string temp = x + x;
        x = temp;
    }

    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        int m;
        string x;
        string s;
        
        cin >> n >> m;
        cin >> x >> s;

        cout << solve(s, x) << "\n";
    }

    return 0;
}