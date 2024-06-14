/**
 * FactoryMachines
 * 1:38 PM 6/14/2024
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


bool ok(int t, int h, const int a[], int n) {
    int tot = 0, cnt;

    for (int i = 0; i < n; i++) {
        cnt = t / a[i];

        if (cnt >= h) {
            return true;
        }

        tot += cnt;
    }

    return h <= tot;
}


void solve() {
    fast
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int& i: a) cin >> i;
    sort(a, a + n);

    int l = 1, r = LONG_LONG_MAX / 2;
    while (l < r) {
        int m = (r + l) / 2;
        if (ok(m, t, a, n)) {
            r = m; // 0 = f(l) < f(m) = 1
        } else {
            l = m + 1; // 0 = f(m) < f(r) = 1
        }
    }

    cout << l << nl;
}

//int32_t main() {solve();}
