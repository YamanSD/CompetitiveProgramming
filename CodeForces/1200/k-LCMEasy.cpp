/**
 * 15:38:21 8/8/24
 * k-LCMEasy
 */
// ./CodeForces/1200/k-LCMEasy.cpp
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

    while (k > 3) {
        n--, k--;
        cout << 1 << ' ';
    }
    int a = -1, b = -1, c = -1;
    if (n % 2) a = n / 2, b = n / 2, c = 1;
    else {
        for (int p2 = 1; p2 <= n; p2 <<= 1) {
            int rem = n - p2;
            if (rem > 0 and rem % 2 == 0) {
                int x = p2, y = rem / 2, z = rem / 2;
                if (2 * lcm(x, lcm(y, z)) <= n) a = x, b = y, c = z;
            }
        }
    }
    cout << a << ' ' << b << ' ' << c << nl;
}

int32_t main() {
    fast
    LT solve();
}
