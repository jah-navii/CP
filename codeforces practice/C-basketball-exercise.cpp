#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    
    vector<long long> first(n);
    vector<long long> second(n);
    
    for(int i = 0; i < n; i++) cin >> first[i];
    for(int i = 0; i < n; i++) cin >> second[i];
    
    vector<vector<long long>> dp(2, vector<long long>(n));
    
    dp[0][0] = first[0];
    dp[1][0] = second[0];
    
    for(int i = 1; i < n; i++){
        dp[0][i] = first[i] + max(dp[1][i-1], i >= 2 ? max(dp[0][i-2], dp[1][i-2]) : 0);
        dp[1][i] = second[i] + max(dp[0][i-1], i >= 2 ? max(dp[0][i-2], dp[1][i-2]) : 0);
    }
    
    cout << max(dp[0][n-1], dp[1][n-1]) << "\n";
 
    return 0;
}
