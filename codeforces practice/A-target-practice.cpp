#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int board[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    int t;
    cin >> t;

    while(t--){
        char a[10][10];
        for(int i = 0; i < 10; i++){
            string s;
            cin >> s;
            for(int j = 0; j < 10; j++) a[i][j] = s[j];
        }

        int score = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(a[i][j] == 'X') score += board[i][j];
            }
        }

        cout << score << "\n";
    }

    return 0;
}