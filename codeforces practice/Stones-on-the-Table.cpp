#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    string input;

    cin >> n >> input;

    char curr = input[0];
    int count = 0;
    int soln = 0;
    for(int i = 0; i < n; i++){
        if(input[i] == curr) count++;
        else {
            soln += (count - 1);
            count = 1;
            curr = input[i];
        }
    }

    soln += (count - 1);

    cout << soln;
}