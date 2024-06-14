/**
 * JosephusProblemII
 * 1:52 PM 6/13/2024
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
    int n, k;
    size_t idx;
    cin >> n >> k;
    indexed_set t;
    for (int i = 1; i <= n; i++) t.insert(i);

    idx = k;
    while (not t.empty()) {
        idx %= t.size();

        auto p  = t.find_by_order(idx);
        cout << *p << ' ';
        t.erase(p);

        idx += k;
    }

    cout << nl;
}

//int32_t main() {solve();}
