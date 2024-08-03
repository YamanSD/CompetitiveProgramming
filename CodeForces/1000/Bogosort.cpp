/**
 * 15:56:42 8/2/24
 * Bogosort
 */
// ./CodeForces/1000/Bogosort.cpp
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

bool check(const vector<int>& a, int n) {
    bool fail = false;
    set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(i - a[i]) != s.end()) {
            fail = true;
            break;
        }
        s.insert(i - a[i]);
    }
    return not fail;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& i: a) cin >> i;
        sort(a.rbegin(), a.rend());
        for (int i: a) cout << i << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
