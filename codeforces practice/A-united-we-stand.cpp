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
        int n;
        cin >> n;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        long long mx = *max_element(arr.begin(), arr.end());

        vector<long long> b, c;
        for(int i = 0; i < n; i++){
            if(arr[i] == mx) c.push_back(mx);
            else b.push_back(arr[i]);
        }

        int lb = b.size();
        int lc = c.size();

        if(lb == 0 || lc == 0) cout << "-1\n";
        else {
            cout << lb << " " << lc << "\n";
            for(int i = 0; i < lb; i++) cout << b[i] << " ";
            cout << "\n";
            for(int i = 0; i < lc; i++) cout << c[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}