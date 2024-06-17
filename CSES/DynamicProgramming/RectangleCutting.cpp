/**
 * RectangleCutting
 * 9:05 PM 6/17/2024
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


int cut(int a, int b, vector<vector<int>>& ans, vector<vector<bool>>& solved) {
    if (a == b) return 0;
    if (solved[a][b] or solved[b][a]) return ans[a][b];
    solved[a][b] = solved[b][a] = true;

    for (int i = 1; i < a; i++) {
        ans[a][b] = ans[b][a] = min(ans[a][b], 1 + cut(a - i, b, ans, solved) + cut(i, b, ans, solved));
    }

    for (int i = 1; i < b; i++) {
        ans[a][b] = ans[b][a] = min(ans[a][b], 1 + cut(a, b - i, ans, solved) + cut(a, i, ans, solved));
    }

    return ans[a][b];
}


void solve() {
    fast
    int a, b;
    cin >> a >> b;
    vector<vector<int>> ans(501, vector<int>(501, INF));
    vector<vector<bool>> solved(501, vector<bool>(501, false));

    cout << cut(a, b, ans, solved) << nl;
}

int32_t main() { solve(); }
