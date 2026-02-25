#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        int m;
        int d;

        cin >> n >> m >> d;

        int boxes = d / m + 1;
        int towers = n / boxes;

        if(n % boxes != 0) towers++;

        cout << towers << "\n";
    }
}