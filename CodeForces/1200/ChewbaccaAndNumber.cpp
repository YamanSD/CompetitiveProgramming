/**
 * 15:34:01 6/25/24
 * ChewbaccaAndNumber
 */
// ./CodeForces/1200/ChewbaccaAndNumber.cpp
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
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int x, d;
    string res;
    for (cin >> x; x > 0; x /= 10) {
        d = x % 10;
        res += to_string(x != 9 and d >= 5 ? 9 - d : d);
    }
    std::reverse(res.begin(), res.end());
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
