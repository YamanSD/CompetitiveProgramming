/**
 * SerejaAndSuffixes
 * 3:16 PM 6/20/2024
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
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, m, q;
    cin >> n >> m;
    int a[n], sm[n + 1], rsm[n + 1];
    sm[0] = rsm[n] = 0;
    for (int& i: a) cin >> i;
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
        sm[i + 1] = s.size();
    }
    s.clear();
    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        rsm[i] = s.size();
    }

    while (m--) {
        cin >> q;
        cout << max(sm[n] - sm[q - 1], rsm[q - 1]) << nl;
    }
}

int32_t main() { solve(); }
