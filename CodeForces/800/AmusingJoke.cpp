/**
 * AmusingJoke
 * 12:12 PM 6/10/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    fast
    string s0, s1, s2;
    cin >> s0 >> s1 >> s2;
    s0 += s1;
    std::sort(s0.begin(), s0.end());
    std::sort(s2.begin(), s2.end());
    cout << (s0 == s2 ? "YES" : "NO") << nl;
}
