/**
 * 18:00:26 8/6/24
 * E
 */
// ./CodeForces/Div4-964/E.cpp
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

int log3(int v) {
    int cnt = 0;
    while (v) {
        cnt++;
        v /= 3;
    }
    return cnt;
}

int pow3(int p) {
    return pow(3, p);
}

void solve() {
    int l, r;
    cin >> l >> r;
    int tl = log3(l), tr = log3(r);
    int cnt = 2 * tl - 1;
    for (int i = tl; i <= tr; i++) {
        int tmp = min(r, pow3(i));
        cnt += i * (tmp - l) + 1;
        l = tmp;
    }
    cout << cnt << nl;
}

int32_t main() {
    fast
    LT solve();
}
