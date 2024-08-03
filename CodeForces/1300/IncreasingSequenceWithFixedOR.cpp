/**
 * 15:13:13 7/30/24
 * IncreasingSequenceWithFixedOR
 */
// ./CodeForces/1300/IncreasingSequenceWithFixedOR.cpp
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 63; i >= 0; i--) {
            if ((1ll << i) & n) {
                int tmp = n ^ (1ll << i);
                if (tmp) a.push_back(tmp);
            }
        }
        a.push_back(n);
        cout << a.size() << nl;
        for (int i: a) cout << i << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
