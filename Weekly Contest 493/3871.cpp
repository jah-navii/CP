#include<bits/stdc++.h>
using namespace std;

long long countCommas(long long n) {
    // if(n < 1000LL) return 0;
    // if(n < 1000000LL) return n - 1000LL + 1;
    // if(n < 1000000000LL) return (n - 1000000LL + 1)*2 + (999999LL - 1000LL + 1);
    // if(n < 1000000000000LL) return (n - 1000000000LL + 1)*3 + (999999999LL - 1000000LL + 1)*2 + (999999LL - 1000LL + 1);
    // return (n - 1000000000000LL + 1)*4 + (999999999999LL - 1000000000LL + 1)*3 + (999999999LL - 1000000LL + 1)*2 + (999999LL - 1000LL + 1);

    long long soln = 0;
    long long curr = 1000;

    while(curr <= n){
        soln += n - curr + 1;
        curr *= 1000;
    }

    return soln;
}

int main(){
    int n;
    cin >> n;
    cout << countCommas(n);
}