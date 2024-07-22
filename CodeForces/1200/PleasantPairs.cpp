/**
 * 17:13:06 7/15/24
 * PleasantPairs
 */
// ./CodeForces/1200/PleasantPairs.cpp
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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pii> a(n);
        for (int i = 1; i <= n; i++) {
            cin >> a[i - 1].F;
            a[i - 1].S = i;
        }

        std::sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i].F * a[j].F > 2 * n) break;
                cnt += (a[i].F * a[j].F == a[i].S + a[j].S);
            }
        }
        cout << cnt << nl;
    }
}

int32_t main() {
    fast
    solve();
}
