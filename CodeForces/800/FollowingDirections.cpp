/**
 * 18:49:21 7/14/24
 * FollowingDirections
 */
// ./CodeForces/800/FollowingDirections.cpp
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
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int x = 0, y = 0;
        bool d =false;
        for (char c: s) {
            if (c == 'R') x++;
            else if (c == 'L') x--;
            else if (c == 'U') y++;
            else y--;
            if (x == 1 and y == 1) d = true;
        }
        if (d) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
