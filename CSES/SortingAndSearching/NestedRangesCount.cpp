/**
 * NestedRangesCount
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
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    vector<int> cs(n), cd(n);
    ordered_set<pair<int, int>> rightBounds;
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].i = i;
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        rightBounds.insert({a[i].r, -i});
        cd[a[i].i] = rightBounds.size() - rightBounds.order_of_key({a[i].r, -i}) - 1;
    }
    rightBounds.clear();
    for (int i = n - 1; i >= 0; i--) {
        rightBounds.insert({a[i].r, -i});
        cs[a[i].i] = rightBounds.order_of_key({a[i].r, -i});
    }

    for (int b: cs) cout << b << ' ';
    cout << nl;
    for (int b: cd) cout << b << ' ';
    cout << nl;
}

int32_t main() {solve();}
