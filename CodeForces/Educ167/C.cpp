/**
 * 18:51:19 6/27/24
 * C
 */
// ./CodeForces/Educ167/C.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int& i: a) cin >> i;
        for (int& i: b) cin >> i;

        int m0 = 0, m1 = 0, m3 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                m1 += b[i];
            } else if (a[i] > b[i]) {
                m0 += a[i];
            } else {
                if (a[i] > 0) {
                    if (m0 < m1) {
                        m0++;
                    } else if (m1 > m0) {
                        m1++;
                    } else {
                        m3++;
                    }
                } else if (a[i] < 0) {
                    if (m0 < m1) {
                        m1--;
                    } else if (m1 > m0) {
                        m0--;
                    } else {
                        m3--;
                    }
                }
            }
        }

        if (m3 < 0) {
            m3 *= -1;
            if (m0 < m1) {
                m1 -= min(m1 - m0, m3);
                m3 -= min(m1 - m0, m3);
                cout << m1 - (m3 + 1) / 2 << nl;
            } else {
                m0 -= min(m0 - m1, m3);
                m3 -= min(m0 - m1, m3);
                cout << m0 - (m3 + 1) / 2 << nl;
            }
        } else {
            if (m0 < m1) {
                m0 += min(m1 - m0, m3);
                m3 -= min(m1 - m0, m3);
                cout << m0 + m3 / 2 << nl;
            } else {
                m1 += min(m0 - m1, m3);
                m3 -= min(m0 - m1, m3);
                cout << m1 + m3 / 2 << nl;
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
