#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int soln = INT_MAX;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        soln = min(soln, abs(num));
    }

    cout << soln;

    return 0;
}