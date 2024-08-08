/**
 * 13:04:10 8/6/24
 * E
 */
// ./CodeForces/Div4-859/E.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl endl
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

int query(const vector<int>& a) {
    cout << "? " << a.size() << ' ';
    for (int i: a) {
        cout << i << ' ';
    }
    cout << nl;
    int r;
    cin >> r;
    return r;
}

void ans(int v) {
    cout << "! " << v << nl;
}

void solve() {
    int n;
    cin >> n;
    int a[n], pref[n + 1]; pref[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    int l = 1, r = n, res = 0, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        vector<int> q;
        for (int i = l; i <= mid; i++) q.push_back(i);
        int x = query(q);

        if (x == pref[mid] - pref[l - 1]) {
            l = mid + 1;
        } else {
            r = mid - 1;
            res = mid;
        }
    }

    ans(res);
}

int32_t main() {
    fast
    LT solve();
}
