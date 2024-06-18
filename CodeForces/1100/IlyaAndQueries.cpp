/**
 * IlyaAndQueries
 * 3:17 PM 6/18/2024
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
    int m, l, r, cnt = 0;
    int dp[100005];
    dp[0] = 0;
    string s;
    cin >> s >> m;

    for(int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1])
            cnt++;

        dp[i] = cnt;
    }

    while(m--) {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
}

int32_t main() { solve(); }
