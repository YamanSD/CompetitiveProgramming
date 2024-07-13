/**
 * 17:32:45 7/13/24
 * PetrAndBook
 */
// ./CodeForces/1000/PetrAndBook.cpp
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

void solve() {
    int n, t = 0;
    cin >> n;
    int a[7];
    for (int& i: a) {
        cin >> i;
        t += i;
    }

    n %= t;

    if (n == 0) {
        n = t;
    }

    int cnt = 0;
    while (n > 0) {
        n -= a[cnt++];
    }
    cout << cnt << nl;

}

int32_t main() {
    fast
    solve();
}
