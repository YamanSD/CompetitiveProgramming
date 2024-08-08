/**
 * 12:49:46 8/7/24
 * Raspberries
 */
// ./CodeForces/1000/Raspberries.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
#define LT int T; cin >> T; while (T--)
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& i: a) cin >> i;
    int mn = INF, ecnt = 0;
    bool has3 = false;
    for (int i: a) {
        if (k == 4) {
            ecnt += (i % 2 == 0) + (i % 4 == 0);
            if (i == 3) has3 = true;
        }

        mn = min(mn, ((i + k - 1) / k) * k - i);
    }
    cout << (k == 4 ? min(mn, (ecnt >= 2 ? 0 : (has3 ? 1 : 2 - ecnt))) : mn) << nl;
}

int32_t main() {
    fast
    LT solve();
}
