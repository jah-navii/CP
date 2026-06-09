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
        int n;
        cin >> n;

        int minus = 0;
        int plus = 0;

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;

            if(temp == 1) plus++;
            else minus++;
        }

        int ops = 0;
        while(plus < minus || minus % 2 == 1){
            ops++;
            plus++;
            minus--;
        }

        cout << ops << "\n";
    }
 
    return 0;
}