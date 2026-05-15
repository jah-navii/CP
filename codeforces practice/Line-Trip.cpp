#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int n, x;
        cin >> n >> x;

        vector<int> vec(n,0);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        int soln = 0;
        int curr = 0;

        for(int num : vec){
            int temp = num - curr;
            soln = max(soln, temp);
            curr = num;
        }
        soln = max(soln, 2*(x - curr));

        cout << soln << "\n";
    }
}