/**
 * 10:41:50 7/8/24
 * Football
 */
// ./CodeForces/1000/Football.cpp
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

void solve() {
    int n;
    string s;
    cin >> n;
    map<string, int> m;
    while (n--) {
        cin >> s;
        m[s]++;
    }
    cout << std::max_element(m.begin(), m.end(), [](auto& v0, auto& v1) {
        return v0.S < v1.S;
    })->F << nl;
}

int32_t main() {
    fast
    solve();
}
