/**
 * CountingTilings
 * 2:39 PM 6/19/2024
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
#define INF 1000000000000000000ll
#define MOD 1000000007ll
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void fillc(vector<vector<int>>& tilings, int n, int m, int c, int i, int cur_mask, int next_mask) {
    if (i == n) {
        tilings[c + 1][next_mask] = (tilings[c + 1][next_mask] + tilings[c][cur_mask]) % MOD;
    } else if (cur_mask & (1 << i)) {
        fillc(tilings, n, m, c, i + 1, cur_mask, next_mask);
    } else {
        fillc(tilings, n, m, c, i + 1, cur_mask, next_mask | (1 << i));

        if (i + 1 < n and not (cur_mask & (1 << (i + 1)))) {
            fillc(tilings, n, m, c, i + 2, cur_mask, next_mask);
        }
    }
}

void solve() {
    fast
    int n, m;
    cin >> n >> m;

    if ((n * m) % 2) {
        cout << 0 << nl;
        return;
    }

    vector<vector<int>> tilings(m + 1, vector<int>(1 << n, 0));
    tilings[0][0] = 1;

    for (int c = 0; c < m; c++) {
        for (int mask = 0; mask < (1 << n); mask++) {
            if (tilings[c][mask] > 0) {
                fillc(tilings, n, m, c, 0, mask, 0);
            }
        }
    }

    cout << tilings[m][0] << nl;
}

int32_t main() { solve(); }
