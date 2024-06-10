/**
 * SortTheArray
 * 3:49 PM 6/6/2024
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
    int n, s = -1, e = -1;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1] and s == -1) {
            s = i;
        } else if (a[i] < a[i + 1] and s != -1 and e == -1) {
            e = i;
        }
    }

    if (e == -1) {
        e = n - 1;
    }

    if (s == -1) {
        cout << "yes" << nl << 1 << ' ' << 1 << nl;
        return;
    }

    reverse(a + s, a + e + 1);
    if (is_sorted(a, a + n)) {
        cout << "yes" << nl << (s + 1) << ' ' << (e + 1) << nl;
    } else {
        cout << "no" << nl;
    }
}
