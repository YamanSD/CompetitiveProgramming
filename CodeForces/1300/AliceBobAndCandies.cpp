/**
 * 18:24:55 8/2/24
 * AliceBobAndCandies
 */
// ./CodeForces/1300/AliceBobAndCandies.cpp
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
        int v[n];
        for (int& i: v) cin >> i;
        int i = 1, j = n - 1, a = v[0], b = 0, m = 1, prev_a = v[0], prev_b = -1;
        while (i < n and j >= 0 and i <= j) {
            int cur = 0;
            if (m % 2) { // Bob
                while (cur <= prev_a and j >= 0 and i <= j) {
                    b += v[j];
                    cur += v[j];
                    j--;
                }
                prev_b = cur;
            } else { // Alice
                while (cur <= prev_b and i < n and i <= j) {
                    a += v[i];
                    cur += v[i];
                    i++;
                }
                prev_a = cur;
            }
            m++;
        }
        cout << m << ' ' << a << ' ' << b << nl;
    }
}

int32_t main() {
    fast
    solve();
}
