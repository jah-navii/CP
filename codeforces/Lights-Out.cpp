#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[3][3];
    int soln[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soln[i][j] = 1;
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[i][j] % 2){
                soln[i][j] = 1 - soln[i][j];
                if((i - 1) >= 0) soln[i-1][j] = 1 - soln[i-1][j];
                if((i + 1) < 3) soln[i+1][j] = 1 - soln[i+1][j];
                if((j - 1) >= 0) soln[i][j-1] = 1 - soln[i][j-1];
                if((j + 1) < 3) soln[i][j+1] = 1 - soln[i][j+1];
            } else continue;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << soln[i][j];
        }
        cout << "\n";
    }

    return 0;
}