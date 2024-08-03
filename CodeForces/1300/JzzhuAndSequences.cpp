/**
 * 17:02:12 8/2/24
 * JzzhuAndSequences
 */
// ./CodeForces/1300/JzzhuAndSequences.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    // f(i) = f(i - 1) + f(i + 1)
    // f(1) = x, f(2) = y
    // f(i - 1) = f(i - 2) + f(i)
    // f(i) = f(i - 1) - f(i - 2)
    //      = -f(i - 3)
    //      = f(i - 5) - f(i - 4)
    //      = f(i - 6)
    //      = f(i - 7) - f(i - 8)
    int x, y, n;
    cin >> x >> y >> n;
    int a[]{ x, y, y - x, -x, -y, x - y};
    cout << (a[(n - 1) % 6] % MOD + MOD) % MOD << nl;
}

int32_t main() {
    fast
    solve();
}
