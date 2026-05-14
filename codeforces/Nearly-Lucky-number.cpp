#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    if(!n) return false;
    while(n){
        int digit = n % 10;
        if(digit != 4 && digit != 7) return false;
        n /= 10;
    }

    return true;
}

int main(){
    long long input;
    cin >> input;

    int res = 0;
    while(input){
        int digit = input % 10;
        if(digit == 4 || digit == 7) res++;
        input /= 10;
    }

    if(isLucky(res)) cout << "YES";
    else cout << "NO";
}