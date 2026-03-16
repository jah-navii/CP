#include<bits/stdc++.h>
using namespace std;

int minimumIndex(vector<int>& capacity, int itemSize) {
    int soln = INT_MAX;
    int solnidx = -1;

    for(int i = 0; i < capacity.size(); i++){
        if(capacity[i] < soln && capacity[i] >= itemSize){
            soln = capacity[i];
            solnidx = i;
        }
    }

    return solnidx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> capacity(n);
    for (int i = 0; i < n; i++) cin >> capacity[i];

    int itemSize;
    cin >> itemSize;

    cout << minimumIndex(capacity, itemSize) << "\n";
    return 0;
}