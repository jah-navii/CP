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
        int curr = 0;
        int soln = 0;

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;

            if(temp == 0) curr++;
            else {
                soln = max(soln, curr);
                curr = 0;
            }
        }

        soln = max(soln, curr);
        cout << soln << "\n";
    }
 
    return 0;
}