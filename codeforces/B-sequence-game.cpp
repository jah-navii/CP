#include <iostream>
#include <vector>
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

        vector<int> soln;
        soln.push_back(arr[0]);

        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]) soln.push_back(arr[i]);
            soln.push_back(arr[i]);
        }

        int m = soln.size();

        cout << m << "\n";
        for(int i = 0; i < m; i++) cout << soln[i] << " ";
        cout << "\n";
    }

    return 0;
}