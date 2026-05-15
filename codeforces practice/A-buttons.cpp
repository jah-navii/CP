#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if(c % 2 == 0) {
            a += c/2;
            b += c/2;
        } else {
            a += c/2 + 1;
            b += c/2;
        }

        if(a > b) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}