/**
 * 16:58:45 8/8/24
 * BuildingAnAquarium
 */
// ./CodeForces/1100/BuildingAnAquarium.cpp
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

int n, x;
vector<int> pre, a;

bool check(int h) {
    int s = upper_bound(a.begin(), a.end(), h) - a.begin();
    return (s * h - pre[s]) <= x;
}

void solve() {
    cin >> n >> x;
    a.resize(n); pre.resize(n + 1);
    for (int& i: a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }

    int lo = 1, hi = 1e12;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (check(mid)) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << lo - 1 << nl;
}


int32_t main() {
    fast
    LT solve();
}
