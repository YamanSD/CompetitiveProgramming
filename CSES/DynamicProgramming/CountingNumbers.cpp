/**
 * CountingNumbers
 * 6:23 PM 6/19/2024
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


int f(vector<int>& dp, int n) {
    if (n < 1) {
        return n == 0;
    }
    string s = to_string(n);
    int res = 0, prev = 0, d, diff, below;
    for (int i = 0; i < s.size(); i++) {
        res += dp[i];
    }
    for (int i = 0; i < s.size(); i++) {
        d = s[i] - '0';
        diff = s.size() - i - 1;
        below = prev < d ? d - 1 : d;
        res += d == 0 ? 0 : below * dp[diff];

        if (d == prev) {
            return res;
        }

        prev = d;
    }

    return res + 1;
}

void solve() {
    fast
    int a, b;
    cin >> a >> b;
    vector<int> dp(19);
    dp[0] = 1;
    for (int i = 1; i < 19; i++) {
        dp[i] = 9 * dp[i - 1];
    }

    cout << f(dp, b) - f(dp, a - 1) << nl;
}

int32_t main() { solve(); }
