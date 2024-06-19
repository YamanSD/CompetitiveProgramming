/**
 * FlippingGame
 * 7:27 PM 6/19/2024
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
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n];
    bool noZero = true;
    for (int& i: a) {
        cin >> i;
        if (not i) noZero = false;
    }

    if (noZero) {
        cout << n - 1 << nl;
        return;
    }

    vector<int> rs;
    int l = 0, cur = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] != cur) {
            rs.push_back(cur == 1 ? l - i : i - l);
            l = i;
            cur = a[i];
        }

        if (i == n - 1) {
            rs.push_back(cur == 1 ? l - i - 1 : i - l + 1);
        }
    }

    int res = -INF, cur_sm = 0, s = 0, e = 0, sm = 0;
    for (int i = 0; i < rs.size(); i++) {
        cur_sm += rs[i];

        if (res < cur_sm) {
            res = cur_sm;
            s = sm;
            e = i;
        }

        if (cur_sm < 0) {
            cur_sm = 0;
            sm = i + 1;
        }
    }

    for (int& i: rs) i *= -1;
    for (int i = s; i <= e; i++) {
        rs[i] *= -1;
    }
    int ans = 0;
    for (int i: rs) {
        if (i >= 0) {
            ans += i;
        }
    }

    cout << ans << nl;
}

int32_t main() { solve(); }
