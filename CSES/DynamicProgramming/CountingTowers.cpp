/**
 * CountingTowers
 * 3:55 PM 6/17/2024
 */
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
#define F first
#define S second
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    const int N = 1e6 + 10;
    vector<vector<int>> a(N, vector<int>(8, 0));
    for (int i = 0; i < 8; i++) {
        a[0][i] = 1;
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 8; j++) {
            switch (j) {
                case 0:
                case 2:
                case 3:
                case 4:
                case 5:
                    a[i][j] = (
                            a[i - 1][0] +
                            a[i - 1][1] +
                            a[i - 1][3] +
                            a[i - 1][4] +
                            a[i - 1][5]
                    ) % MOD;
                    break;
                default:
                    a[i][j] = (
                          a[i - 1][2] +
                          a[i - 1][6] +
                          a[i - 1][7]
                    ) % MOD;
                    break;
            }
        }
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (a[n - 1][2] + a[n - 1][6]) % MOD << nl;
    }
}

int32_t main() { solve(); }
