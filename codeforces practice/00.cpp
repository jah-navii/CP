#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int, int>> pairs;

        for (int i = 0; i < n; i++) {
            if (b[i] < p) {
                pairs.push_back({b[i], a[i]});
            }
        }

        sort(pairs.begin(), pairs.end());

        long long cost = p;
        int count = 1;

        for (auto [price, people] : pairs) {
            if (count >= n) break;

            int canTell = min(people, n - count);

            cost += 1LL * canTell * price;
            count += canTell;
        }

        if (count < n) {
            cost += 1LL * (n - count) * p;
        }

        cout << cost << "\n";
    }

    return 0;
}