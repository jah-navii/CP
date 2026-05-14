#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin >> input;

    int n = input.length();
    int up = 0;
    int low = 0;

    for(int i = 0; i < n; i++){
        if(input[i] < 97) up++;
        else low++;
    }

    if(up > low) transform(input.begin(), input.end(), input.begin(), ::toupper);
    else transform(input.begin(), input.end(), input.begin(), ::tolower);

    cout << input;
}