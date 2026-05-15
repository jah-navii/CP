#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int x = 0; 
    int y = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j]) {
                x = i;
                y = j;
                break;
            }
        }
    }

    int soln = abs(2-x) + abs(2-y);
    cout << soln;
}