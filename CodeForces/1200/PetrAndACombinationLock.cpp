/**
 * 13:33:22 7/15/24
 * PetrAndACombinationLock
 */
// ./CodeForces/1200/PetrAndACombinationLock.cpp
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
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;

    int cnb = (1 << n) - 1;
    for (int i = 0; i < cnb; ++i) {
        int leftOver = 0;

        for (int j = 0; j < n; ++j) {
            if ((1 << j) & i)
                leftOver += a[j];
            else
                leftOver -= a[j];
        }

        if (leftOver % 360 == 0) {
            YES
            return;
        }
    }

    NO
}

int32_t main() {
    fast
    solve();
}
