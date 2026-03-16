#include<bits/stdc++.h>
using namespace std;

int countCommas(int n) {
    if(n < 1000) return 0;
    return n - 1000 + 1;
}

int main(){
    int n;
    cin >> n;
    cout << "\n" << countCommas(n);
    return 0;
}