/**
 * 19:17:23 7/1/24
 * SumOfCubes
 */
// ./CodeForces/1100/SumOfCubes.cpp
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
    int MAX = 10005;
    int t, x;
    set<int> table;
    for (int i = 1; i <= MAX; i++) table.insert(i * i * i);
    cin >> t;

    while (t--) {
        cin >> x;
        bool done = false;
        for (int i = 1; i <= MAX; i++) {
            if (table.find(x - i * i * i) != table.end()) {
                done = true;
                break;
            }
        }
        if (done) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
