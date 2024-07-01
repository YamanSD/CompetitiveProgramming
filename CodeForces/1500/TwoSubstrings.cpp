/**
 * 16:19:56 6/25/24
 * TwoSubstrings
 */
// ./CodeForces/1500/TwoSubstrings.cpp
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
    string str;
    cin >> str;

    bool ab = false, ba = false;
    for (int i = 0; i < str.size() - 1; ++i) {
        if (str[i] == 'A' and str[i + 1] == 'B' and not ab) {
            ab = true;
            i++;
        } else if (str[i] == 'B' and str[i + 1] == 'A' and ab) {
            ba = true;
        }
    }

    if (ba) {
        YES
        return;
    }

    ab = false, ba = false;
    for (int i = 0; i < str.size() - 1; ++i) {
        if (str[i] == 'B' and str[i + 1] == 'A' and not ba) {
            ba = true;
            i++;
        } else if (str[i] == 'A' and str[i + 1] == 'B' and ba){
            ab = true;
        }
    }

    if (ab) {
        YES
    } else {
        NO
    }
}

int32_t main() {
    fast
    solve();
}
