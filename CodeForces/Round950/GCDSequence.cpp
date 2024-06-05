/**
 * GCDSequence
 * 3:31 PM 6/5/2024
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

int check(const vector<int>& a) {
    int n = a.size();
    int b[n - 1];

    for (int i = 0; i < n - 1; i++) b[i] = gcd(a[i], a[i + 1]);

    int fi = -1;
    for (int i = 1; i < n - 1; i++) {
        if (b[i - 1] > b[i]) {
            fi = i;
            break;
        }
    }

    return fi;
}

void solve() {
    fast
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int& i: a) cin >> i;

        int fi = check(a);

        if (fi == -1) {
            cout << "YES" << nl;
            continue;
        }

        vector<int> a1(a), a2(a), a3(a);

        if (fi) {
            a1.erase(a1.begin() + fi - 1);
        }

        a2.erase(a2.begin() + fi);
        a3.erase(a3.begin() + fi + 1);

        cout << ((fi and check(a1) == -1) or check(a2) == -1 or check(a3) == -1 ? "YES" : "NO") << nl;
    }
}
