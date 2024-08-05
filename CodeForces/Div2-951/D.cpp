/**
 * 13:20:20 8/4/24
 * D
 */
// ./CodeForces/Div2-951/D.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int x = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == s[n - 1]) {
                x++;
            } else {
                break;
            }
        }

        auto check = [&]() {
            for (int i = 0; i < k; i++) {
                if (s[i] != s[0]) return false;
            }
            for (int i = 0; i + k < n; i++) {
                if (s[i] == s[i + k]) return false;
            }
            return true;
        };

        auto operation = [&](int p) {
            reverse(s.begin(), s.begin() + p);
            s = s.substr(p, (int)s.size() - p) + s.substr(0, p);
            if (check()) {
                cout << p << "\n";
            } else {
                cout << -1 << "\n";
            }
        };

        if (x == k) {
            int p = n;
            for (int i = n - 1 - k; i >= 0; i--) {
                if (s[i] == s[i + k]) {
                    p = i + 1;
                    break;
                }
            }
            operation(p);
        } else if (x > k) {
            cout << -1 << "\n";
        } else {
            bool was = false;
            for (int i = 0; i < n; i++) {
                if (s[i] != s.back()) continue;
                int j = i;
                while (j + 1 < n && s[i] == s[j + 1]) {
                    j++;
                }
                if (j - i + 1 + x == k) {
                    operation(j + 1);
                    was = true;
                    break;
                } else if (j - i + 1 - k + x == k) {
                    operation(i + k - x);
                    was = true;
                    break;
                }
                i = j;
            }
            if (!was) {
                operation(n);
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
