/**
 * 19:06:50 8/3/24
 * LifeWithoutZeros
 */
// ./CodeForces/1000/LifeWithoutZeros.cpp
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
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string sa, sb, sc;
    for (char ch: to_string(a)) if (ch != '0') sa += ch;
    for (char ch: to_string(b)) if (ch != '0') sb += ch;
    for (char ch: to_string(c)) if (ch != '0') sc += ch;
    if (stoll(sc) == stoll(sa) + stoll(sb)) YES else NO
}

int32_t main() {
    fast
    solve();
}
