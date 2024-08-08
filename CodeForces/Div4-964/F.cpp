/**
 * 18:33:12 8/6/24
 * F
 */
// ./CodeForces/Div4-964/F.cpp
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

const int N = 2e5 + 5;
int fact[N];
int pw(int a, int b) {
    int r = 1;
    while (b > 0) {
        if (b % 2) r = (r * a) % MOD;
        b /= 2;
        a = (a * a) % MOD;
    }
    return r;
}
int C(int n, int k) {
    if (n < k) return 0;
    return (fact[n] * pw((fact[n - k] * fact[k]) % MOD, MOD - 2)) % MOD;
}


void solve() {
    int n, k;
    cin >> n >> k;
    int a[n], c1 = 0;
    for (int& i: a) {
        cin >> i;
        c1 += i;
    }

    int res = 0;
    for (int i = k / 2 + 1; i <= min(k, c1); i++) {
        res += C(c1, i) * C(n - c1, k - i) % MOD;
        res %= MOD;
    }
    cout << res << nl;

}

int32_t main() {
    fast
    fact[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = (fact[i - 1] * i) % MOD;
    LT solve();
}
