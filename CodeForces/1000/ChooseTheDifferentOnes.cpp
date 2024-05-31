/**
 * ChooseTheDifferentOnes
 * 2:33 PM 5/31/2024
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
    int t, n, m, k, a, b, c, temp;
    map<int, pair<bool, bool>> in;
    cin >> t;

    while (t--) {
        cin >> n >> m >> k;
        in.clear();
        a = b = c = 0;

        for (int i = 0; i < n; i++) {
            cin >> temp;
            in[temp] = {true, false};
        }
        for (int i = 0; i < m; i++) {
            cin >> temp;

            if (in.find(temp) == in.end()) {
                in[temp] = {false, true};
            } else {
                in[temp].second = true;
            }
        }

        for (int i = 1; i <= k; i++) {
            if (in.find(i) != in.end()) {
                const auto& p{in[i]};

                if (p.first and p.second) {
                    c++;
                } else if (p.first) {
                    a++;
                } else { // p.second is true
                    b++;
                }
            } else {
                break;
            }
        }

        cout << (a + b + c == k and a <= k / 2 and b <= k / 2 ? "YES" : "NO") << nl;
    }
}
