#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin >> input;
    int i = 0;
    int n = input.length();
    string soln = "";
    while(i < n - 1){
        if(input[i] == '.') {
            soln += '0';
            i++;
        }
        else if(input[i+1] == '.') {
            soln += '1';
            i += 2;
        } else {
            soln += '2';
            i += 2;
        }
    }

    if(i == n - 1) soln += '0';
    cout << soln;
}