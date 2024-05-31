/**
 * BinaryCut
 * 7:39 PM 5/31/2024
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
    int t, res;
    bool hasTrans;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        res = 1;
        hasTrans = false;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != s[i + 1]) {
                if (s[i] == '0') {
                    hasTrans = true;
                }

                res++;
            }
        }

        cout << res - hasTrans << nl;
    }
}


