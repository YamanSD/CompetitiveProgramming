/**
 * 18:57:00 7/22/24
 * OmkarAndLastClassOfMath
 */
// ./CodeForces/1300/OmkarAndLastClassOfMath.cpp
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

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2) {
            int p = is_prime(n);
            if (p == -1) {
                cout << 1 << ' ' << n - 1 << nl;
            } else {
                int x = n / p;
                cout << x << ' ' << x * (n / x - 1) << nl;
            }
        } else {
            n /= 2;
            cout << n << ' ' << n << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
