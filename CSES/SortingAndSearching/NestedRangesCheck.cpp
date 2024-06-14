/**
 * NestedRangesCheck
 * 3:56 PM 6/13/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

struct Range {
    int l, r, i;

    bool operator<(const Range& rn) const {
        return this->l != rn.l ? this->l < rn.l : this->r > rn.r;
    }
};

void solve() {
    fast
    int n;
    cin >> n;
    Range a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].i = i;
    }
    vector<bool> cs(n), cd(n);

    sort(a, a + n);

    int mx = 0;
    for (auto& p: a) {
        if (mx < p.r) {
            mx = p.r;
        } else {
            cd[p.i] = true;
        }
    }

    int mn = LONG_LONG_MAX;
    for (int i = n - 1; i >= 0; i--) {
        auto& p = a[i];

        if (mn > p.r) {
            mn = p.r;
        } else {
            cs[p.i] = true;
        }
    }

    for (bool b: cs) cout << b << ' ';
    cout << nl;
    for (bool b: cd) cout << b << ' ';
    cout << nl;
}

//int32_t main() {solve();}
