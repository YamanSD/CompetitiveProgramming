/**
 * 14:26:44 7/22/24
 * DivisibilityByEight
 */
// ./CodeForces/1500/DivisibilityByEight.cpp
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
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    string s, res, t;
    cin >> s;
    for (char c: s) {
        t = c;
        if (stoi(t) % 8 == 0) {
            res = t;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            t = ""; t += s[i]; t += s[j];
            if (stoi(t) % 8 == 0) {
                res = t;
                break;
            }
        }
        if (not res.empty()) break;
    }
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            for (int k = j + 1; k < s.size(); k++) {
                t = ""; t += s[i]; t += s[j]; t += s[k];
                if (stoi(t) % 8 == 0) {
                    res = t;
                    break;
                }
            }
            if (not res.empty()) break;
        }
        if (not res.empty()) break;
    }

    if (res.empty()) NO else {
        YES
        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
