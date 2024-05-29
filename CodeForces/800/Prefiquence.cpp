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
    int t, n, m, j;
    string a, b;
    cin >> t;

    while (t--) {
        cin >> n >> m >> a >> b;
        j = 0;

        for (int i = 0; i < m; i++) {
            if (j < n and a[j] == b[i]) {
                j++;
            }
        }

        cout << j << nl;
    }
}
