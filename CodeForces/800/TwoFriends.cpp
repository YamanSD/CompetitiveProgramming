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
    int t, n, p;
    map<int, int> m;
    bool isDone;
    cin >> t;

    while (t--) {
        cin >> n;
        m.clear();
        isDone = false;

        for (int i = 1; i <= n; i++) {
            cin >> p;
            m[i] = p;
        }

        for (auto& co: m) {
            if (co.first == m[co.second] or n == 2) {
                cout << 2 << nl;
                isDone = true;
                break;
            }
        }

        if (not isDone) {
            cout << 3 << nl;
        }
    }
}
