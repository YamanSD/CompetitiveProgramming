/**
 * YetAnotherCoinProblem
 * 3:16 PM 6/4/2024
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

int calc(int n) {
    int ans = 0;

    ans += n / 15;
    n %= 15;
    ans += n/6;
    n %= 6;
    ans += n/3;
    n %= 3;
    ans += n;

    return ans;
}

void solve() {
    fast
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        if (n < 10) {
            cout << calc(n) << nl;
        } else if (n < 20) {
            cout << min(calc(n), calc(n - 10) + 1) << nl;
        } else {
            cout << min({calc(n), calc(n - 10) + 1, calc(n - 20) + 2}) << nl;
        }
    }
}
