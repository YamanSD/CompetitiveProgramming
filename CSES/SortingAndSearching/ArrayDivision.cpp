/**
 * ArrayDivision
 * 1:12 PM 6/15/2024
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
    int n, k, mx = 0;
    cin >> n >> k;
    int a[n];
    for (int& i: a) {
        cin >> i;
        mx = max(mx, i);
    }
    int l = mx, h = 1e18, res = 1e18;
    while (l <= h) {
        int mid = (l + h) / 2, blocks = 1, sm = 0;

        for (int i: a) {
            if (sm + i > mid) {
                sm = 0;
                blocks++;
            }

            sm += i;
        }

        if (blocks > k) {
            l = mid + 1;
        } else {
            if (mid < res) {
                res = mid;
            }

            h = mid - 1;
        }
    }

    cout << res << nl;
}

//int32_t main() {solve();}
