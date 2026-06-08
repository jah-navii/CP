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
 
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
 
        int maxdiff = INT_MAX;
        bool sorted = true;
 
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] < 0) sorted = false;
            maxdiff = min(maxdiff, abs(arr[i] - arr[i-1]));
        }
 
        if(!sorted) cout << 0 << "\n";
        else cout << maxdiff/2 + 1 << "\n";
    }
 
    return 0;
}