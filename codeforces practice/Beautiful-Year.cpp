#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(int n){
    set<int> digits;
    for(int i = 0; i < 4; i++){
        int digit = n % 10;
        if(digits.find(digit) != digits.end()) return false;
        digits.insert(digit);
        n /= 10;
    }
    return true;
}

int main(){
    int input;
    cin >> input;
    input++;

    while(input < 9876){
        if(isBeautiful(input)) break;
        else input++;
    }

    cout << input;
}