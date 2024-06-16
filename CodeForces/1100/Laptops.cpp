/**
 * Laptops
 * 8:50 AM 6/16/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (auto &p: a) cin >> p.F >> p.S;
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++) {
        if (a[i].F < a[i + 1].F and a[i].S > a[i + 1].S) {
            cout << "Happy Alex" << nl;
            return;
        }
    }

    cout << "Poor Alex" << nl;
}

int32_t main() { solve(); }
