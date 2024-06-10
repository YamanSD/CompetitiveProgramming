/**
 * ChoosingTeams
 * 12:25 PM 6/10/2024
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
    int n, k, r = 0;
    cin >> n >> k;
    int a[n];
    for (int& i: a) {
        cin >> i;
        i += k;
    }

    sort(a, a + n);
    for (int i = 0; i < n - 2; i += 3) {
        if (a[i] <= 5 and a[i + 1] <= 5 and a[i + 2] <= 5) {
            r++;
        }
    }

    cout << r << nl;
}
