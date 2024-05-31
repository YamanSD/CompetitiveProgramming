/**
 * RudolfAnd121
 * 1:29 PM 5/31/2024
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
    int t, n;
    bool isDone;
    vector<int> arr;
    cin >> t;

    while (t--) {
        cin >> n;
        arr.resize(n);
        isDone = false;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] and arr[i - 1] and arr[i + 1]) {
                const int m = min(arr[i] / 2, min(arr[i - 1], arr[i + 1]));
                arr[i] -= 2 * m;
                arr[i - 1] -= m;
                arr[i + 1] -= m;
            }
        }

        for (auto i: arr) {
            if (i) {
                cout << "NO" << nl;
                isDone = true;
                break;
            }
        }

        if (not isDone) {
            cout << "YES" << nl;
        }
    }
}
