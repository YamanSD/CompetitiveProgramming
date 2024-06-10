/**
 * Vacation
 * 3:35 PM 6/8/2024
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


void solve() {
    fast
    int n, res = 0;
    cin >> n;
    int a[n];

    for (int& i: a) cin >> i;

    for (int i = 0; i < n - 1; i++) {
        if (a[i]) {
            if (a[i + 1] == 3) {
                if (a[i] == 1) {
                    a[i + 1] = 2;
                } else {
                    a[i + 2] = 1;
                }
            } else if (a[i] == a[i + 1]) {
                res++;
            }
        } else {
            res++;
        }
    }

    cout << (res + (a[n - 1] == 0)) << nl;
}
