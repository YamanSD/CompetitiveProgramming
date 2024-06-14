/**
 * SubarraySumI
 * 4:19 PM 6/14/2024
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
    int n, x, cur = 0, res = 0;
    cin >> n >> x;
    int a[n];
    for (int& i: a) cin >> i;
    queue<int> q;

    for (int i: a) {
        cur += i;
        q.push(i);

        while (cur > x) {
            cur -= q.front();
            q.pop();
        }

        if (cur == x) {
            res++;
        }
    }

    cout << res << nl;
}

//int32_t main() {solve();}
