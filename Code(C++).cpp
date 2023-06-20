#include <bits/stdc++.h>
using namespace std;



vector<pair<int,int>> solve(int n, int K) {
    vector<pair<int,int>> res;
    if (K == n * (n - 1) / 2) {
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                res.push_back({i, j});
            }
        }
        return res;
    }

    if (K > n * (n - 1) / 2 - (n - 1)) {
        return {};
    }

    for (int i = 1; i < n; ++i) {
        res.push_back({0, i});
    }

    int rem = (n - 1) * (n - 2) / 2 - K;
    for (int i = 1; i < n && rem > 0; ++i) {
        for (int j = i + 1; j < n && rem > 0; ++j) {
            res.push_back({i, j});
            --rem;
        }
    }

    return res;
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);


    int t;
    cin >> t;
    while (t-- > 0) {
        int n, K;
        cin >> n >> K;
        auto res = solve(n, K);
        if (res.empty()) {
            cout << -1 << '\n';
        } else {
            cout << (int) res.size() << '\n';
            for (auto [u, v] : res) {
                cout << u + 1 << ' ' << v + 1 << '\n';
            }
        }
    }
  

    return 0;
}