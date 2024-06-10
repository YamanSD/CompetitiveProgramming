/**
 * ProductOfThreeNumbers
 * 4:39 PM 6/6/2024
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
    int t, n, a, b, c, d;
    bool done;
    cin >> t;

    while (t--) {
        cin >> n;
        done = false;
        for (a = 2; a * a <= n; a++) {
            if (n % a == 0) {
                d = n / a;

                for (b = a + 1; b * b < d; b++) {
                    if (d % b == 0) {
                        c = d / b;

                        if (c != a and c != b) {
                            done = true;
                            break;
                        }
                    }
                }
            }

            if (done) {
                break;
            }
        }

        if (done) {
            cout << "YES" << nl << a << ' ' << b << ' ' << c << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}
