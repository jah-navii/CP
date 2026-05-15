#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int k;
    string curr; 
    cin >> n >> k >> curr;
    string soln = curr;

    for(int i = 0; i < k; i++){
        soln = "";
        int j = 0;
        while(j < n - 1){
            if(curr[j] == 'B' && curr[j+1] == 'G'){
                soln += "GB";
                j += 2;
            } else {
                soln += curr[j];
                j++;
            }
        }

        if(j == n-1) soln += curr[j];
        curr = soln;
    }

    cout << soln;
}