/**
 * TrafficLights
 * 8:08 PM 6/12/2024
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
    int x, n;
    map<int, int> m;
    set<pair<int, int>> s;
    cin >> x >> n;
    m[0] = -x;
    s.insert({-x, 0});
    int a[n];
    for (int& i: a) cin >> i;

    for (int i: a) {
        // 0001000100
        int nind = -i; // -6
        auto p = m.lower_bound(nind);
        int sz = p->second, // -5
            ind = p->first; // -3
        int nsz = i + ind + sz; // 6 - 3 - 5 = -2

        auto sp = s.find({sz, ind}); // -5, -3
        s.erase(sp); // removed

        s.insert({nsz, nind}); // -2, -6
        s.insert({sz - nsz, ind}); // -5 + 2 = -3, -3
        m[nind] = nsz; // -6, -2
        m[ind] = sz - nsz; // -3, -3

        // 3
        cout << -s.begin()->first << ' ';
    }
    cout << nl;
}

//int32_t main() {solve();}
