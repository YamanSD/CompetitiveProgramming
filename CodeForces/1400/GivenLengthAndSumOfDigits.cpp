/**
 * GivenLengthAndSumOfDigits
 * 3:00 PM 6/8/2024
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
    int m, s, j = 0, tmp;
    cin >> m >> s;
    vector<int> mn(m), mx(m);

    if (s == 0) {
        cout << (m == 1 ? "0 0" : "-1 -1") << nl;
        return;
    }

    for (int i = 0; i < m; i++) {
        tmp = min(s, 9ll);
        mx[i] = tmp;
        s -= tmp;
    }

    if (s) {
        cout << "-1 -1" << nl;
        return;
    }

    for (int i = m - 1; 0 <= i; i--) {
        mn[m - 1 - i] = mx[i];
    }

    while (mn[j] == 0) {
        j++;
    }

    mn[j]--;
    mn[0]++;

    for (int i: mn) cout << i;
    cout << ' ';
    for (int i: mx) cout << i;
    cout << nl;
}
