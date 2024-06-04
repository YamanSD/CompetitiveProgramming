/**
 * InformationsInMac
 * 2:29 PM 6/4/2024
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
    int t, n, m1, m2;
    bool fail;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n], cnt1[n + 1], cnt2[n + 1];
        memset(cnt1, 0, sizeof(int) * (n + 1));
        memset(cnt2, 0, sizeof(int) * (n + 1));
        fail = true;

        for (int& i: a) {
            cin >> i;
            cnt2[i]++;
        }

        m1 = m2 = 0;

        while (cnt2[m2]) m2++;
        for (int i = 0; i < n; i++) {
            cnt1[a[i]]++;

            if (--cnt2[a[i]] == 0 and m2 > a[i]) m2 = a[i];

            while (m2 and not cnt2[m2 - 1]) --m2;
            while (cnt1[m1]) ++m1;

            if (m1 == m2) {
                cout << 2 << nl << 1 << ' ' << i + 1 << nl << i + 2 << ' ' << n << nl;
                fail = false;
                break;
            }
        }

        if (fail) {
            cout << -1 << nl;
        }
    }
}
