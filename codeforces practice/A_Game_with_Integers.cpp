#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int n;
        cin >> n;

        if(n % 3 == 0) cout << "Second\n";
        else cout << "First\n";
    }
}