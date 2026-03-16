#include<bits/stdc++.h>
using namespace std;

string mergeCharacters(string s, int k) {
    int len = 0;
    while(s.length() != len){
        len = s.length();

        bool merged = false;

        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len && j - i <= k; j++){
                if(s[i] == s[j]){
                    s.erase(j, 1);
                    merged = true;
                    break;
                }
            }
            if(merged) break;
        }
    }

    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;

    cout << mergeCharacters(s, k) << "\n";
    return 0;
}