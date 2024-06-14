/**
 * NearestSmallerValues
 * 4:01 PM 6/14/2024
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
#define F first
#define S second
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n];
    stack<pair<int, int>> s;
    for (int& i: a) cin >> i;

    for (int i = 0; i < n; i++) {
        while (not s.empty() and s.top().F >= a[i]) {
            s.pop();
        }

        if (s.empty()) {
            cout << 0 << ' ';
        } else {
            cout << s.top().S << ' ';
        }

        s.emplace(a[i], i + 1);
    }
    cout << nl;
}

//int32_t main() {solve();}
