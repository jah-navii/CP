#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    int x, y, z;

    for(int i = 0; i < N; i++){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if(sumx || sumy || sumz) cout << "NO"; 
    else cout << "YES";
}