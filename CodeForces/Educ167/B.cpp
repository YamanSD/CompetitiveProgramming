/**
 * 18:06:13 6/27/24
 * B
 */
// ./CodeForces/Educ167/B.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


// Function to find the length of the longest common subsequence of two strings
int longestCommonSubsequence(const std::string& s1, const std::string& s2) {
    int m = s1.size();
    int n = s2.size();
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

// Function to determine the minimum number of characters required to make s1 a subsequence of s2
int minCharsToSubsequence(const std::string& s1, const std::string& s2) {
    int lcsLength = longestCommonSubsequence(s1, s2);
    return s1.size() - lcsLength;
}

void solve() {
    int t;
    string a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << a.size() + minCharsToSubsequence(b, a) << nl;
    }
}

int32_t main() {
    fast
    solve();
}
