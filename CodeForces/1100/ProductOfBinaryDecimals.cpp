/**
 * ProductOfBinaryDecimals
 * 3:08 PM 6/1/2024
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

bool isBinaryDecimal(int n) {
    while (n) {
        if (n % 10 > 1) {
            break;
        }

        n /= 10;
    }

    return n == 0;
}

void solve() {
    fast
    int t, n;
    const int MAX = 1e5 + 7;
    vector<int> bdecimals{};

    for (int i = 1; i < MAX; i++) {
        if (isBinaryDecimal(i)) {
            bdecimals.push_back(i);
        }
    }
    cin >> t;

    while (t--) {
        cin >> n;

        if (n == 1) {
            cout << "YES" << nl;
        } else {
            for (int i = bdecimals.size(); 0 < i; i--) {
                if (n % bdecimals[i] == 0) {
                    n /= bdecimals[i];
                    i = bdecimals.size();
                }
            }

            cout << (n <= 1 ? "YES" : "NO") << nl;
        }
    }
}
