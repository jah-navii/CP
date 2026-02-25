#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.length();

        vector<int> digits;
        int sum = 0;

        for(int d = 0; d < len; d++){
            int digit = s[d] - '0';
            sum += digit;

            if(d == 0) digits.push_back(digit - 1);
            else digits.push_back(digit);
        }

        if(sum <= 9) {
            cout << 0 << "\n";
        } else {
            int moves = 0;
            sort(digits.begin(), digits.end(), greater<int>());

            for(int digit : digits){
                if(sum <= 9) break;
                sum -= digit;
                moves++;
            }

            cout << moves << "\n";
        }
    }

    return 0;
}