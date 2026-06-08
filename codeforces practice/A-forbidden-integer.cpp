#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        if(k == 1 && x == 1) cout << "No\n";
        else if(n % 2 == 1 && k <= 2 && x == 1){
            cout << "No\n";
        } else if(x != 1){
            cout << "Yes\n";
            cout << n << "\n";
            for(int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        } else {
            cout << "Yes\n";
            if(n % 2 == 0){
                cout << n/2 << "\n";
                for(int i = 0; i < n/2; i++) cout << 2 << " ";
                cout << "\n";
            } else {
                cout << n/2 << "\n";
                cout << 3 << " ";
                for(int i = 0; i < n/2 - 1; i++) cout << 2 << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}