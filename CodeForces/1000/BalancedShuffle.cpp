/**
 * BalancedShuffle
 * 11:22 AM 5/31/2024
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl '\n'
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    fast
    string s;
    vector<pair<int, int>> bal{};
    int cur = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bal.emplace_back(cur, i);

        if (s[i] == '(') {
            cur++;
        } else {
            cur--;
        }
    }

    std::sort(bal.begin(), bal.end(), [](auto& a, auto& b) {
        return a.first < b.first or (a.first == b.first and a.second > b.second);
    });

    for (auto& p: bal) {
        cout << s[p.second];
    }

    cout << nl;
}
