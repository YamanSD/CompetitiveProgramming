/**
 * 13:14:42 7/14/24
 * PresentFromLena
 */
// ./CodeForces/1000/PresentFromLena.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ranges>

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
    int n;
    cin >> n;
    int mx = 2 * n + 1;

    vector<string> pt;
    for (int i = 0; i <= n; i++) {
        string s(mx, ' ');
        for (int j = 0; j <= i; j++) {
            s[n - i + j] = '0' + j;
        }
        for (int j = 0; j < n; j++) {
            s[mx - j - 1] = s[j];
        }
        pt.push_back(s);
    }
    for (int i = 0; i < pt.size(); i++) {
        bool p0 = false;
        for (char c: pt[i]) {
            cout << c;
            if (c == '0') {
                if (p0 or i == 0) break;
                p0 = true;
            }
            cout << ' ';
        }
        cout << nl;
    }
    for (int i = n - 1; i >= 0; i--) {
        bool p0 = false;
        for (char c: pt[i]) {
            cout << c;
            if (c == '0') {
                if (p0 or i == 0) break;
                p0 = true;
            }
            cout << ' ';
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
