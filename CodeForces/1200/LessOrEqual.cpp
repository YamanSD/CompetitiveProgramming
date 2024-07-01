/**
 * 18:55:06 7/1/24
 * LessOrEqual
 */
// ./CodeForces/1200/LessOrEqual.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& i: a) cin >> i;
    map<int, int> cnt;
    for (int i: a) cnt[i]++;
    vector<int> pre{0};
    for (auto& p: cnt) {
        pre.push_back(pre.back() + p.S);
    }

    if (k == 0) {
        if (cnt[1]) cout << -1 << nl;
        else cout << 1 << nl;
        return;
    }

    int i = 1;
    for (auto& p: cnt) {
        if (pre[i] == k) {
            cout << p.F << nl;
            return;
        }

        i++;
    }
    cout << -1 << nl;
}

int32_t main() {
    fast
    solve();
}
