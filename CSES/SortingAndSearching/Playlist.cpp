/**
 * Playlist
 * 6:57 PM 6/12/2024
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
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, res = 0, l = 0, r = 0;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;
    set<int> s;

    while (l < n and r < n) {
        while (r < n and not s.count(a[r])) {
            s.insert(a[r]);
            res = max(res, r - l + 1);
            r++;
        }

        while (r < n and s.count(a[r])) {
            s.erase(a[l++]);
        }
    }

    cout << res << nl;
}

int32_t main() {solve();}
