/**
 * 14:43:46 7/20/24
 * Even-OddGame
 */
// ./CodeForces/1200/Even-OddGame.cpp
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
        cin >> n;
        int v[n];
        multiset<int> ev, od;
        for (int&i: v) {
            cin >> i;
            if (i % 2) {
                od.insert(-i);
            } else {
                ev.insert(-i);
            }
        }

        int b = 0, a = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Alice
                if (not ev.empty() and (od.empty() or *ev.begin() < *od.begin())) {
                    a -= *ev.begin();
                    ev.erase(ev.begin());
                } else {
                    od.erase(od.begin());
                }
            } else { // Bob
                if (not od.empty() and (ev.empty() or *od.begin() < *ev.begin())) {
                    b -= *od.begin();
                    od.erase(od.begin());
                } else {
                    ev.erase(ev.begin());
                }
            }
        }

        if (b == a) {
            cout << "Tie" << nl;
        } else if (b < a) {
            cout << "Alice" << nl;
        } else {
            cout << "Bob" << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
