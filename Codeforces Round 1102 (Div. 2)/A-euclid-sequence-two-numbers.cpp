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

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        if(n == 2){
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << "\n";
        } else {
            bool valid = true;
            for(int i = 2; i < n; i++){
                if(arr[i-2] % arr[i-1] != arr[i]) valid = false;
            }

            if(!valid) cout << "-1\n";
            else {
                cout << arr[0] << " ";
                cout << arr[1] << "\n";
            }
        }
    }

    return 0;
}