/**
 * ProgressiveSquare
 * 1:04 PM 5/31/2024
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
    int t, n, a, c, d, temp;
    bool isDone;
    map<int, int> m;
    vector<vector<int>> cst;
    cin >> t;

    while (t--) {
        cin >> n >> c >> d;
        a = -1;
        isDone = false;
        m.clear();
        cst.clear();

        for (int i = 0; i < n * n; i++) {
            cin >> temp;

            if (a == -1) {
                a = temp;
            }

            a = min(a, temp);
            m[temp]++;
        }

        for (int row = 0; row < n; row++) {
            vector<int> nr{};

            for (int col = 0; col < n; col++) {
                if (col == 0) {
                    if (row == 0) {
                        nr.push_back(a);
                    } else {
                        nr.push_back(cst[row - 1][col] + c);
                    }
                } else {
                    nr.push_back(nr[col - 1] + d);
                }
            }

            cst.push_back(nr);
        }

        for (auto& row: cst) {
            for (auto& col: row) {
                if (m[col] == 0) {
                    cout << "NO" << nl;
                    isDone = true;
                    break;
                }

                m[col]--;
            }

            if (isDone) {
                break;
            }
        }

        if (not isDone) {
            cout << "YES" << nl;
        }
    }
}
