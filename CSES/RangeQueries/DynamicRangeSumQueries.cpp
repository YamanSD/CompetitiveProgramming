/**
 * 13:21:58 6/21/24
 * DynamicRangeSumQueries
 */
// ./CSES/RangeQueries/DynamicRangeSumQueries.cpp
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

template <class T, T (*op)(T, T), T (*e)()>
struct segtree {
    int n, size, log;
    vector<T> d;

    explicit segtree(int n) : segtree(vector<T>(n, e())) {}

    explicit segtree(const vector<T>& a): d{} {
        n = a.size();
        size = bit_ceil(n);
        log = __builtin_ctz(size);
        d.resize(size << 1, e());
        for (int i = 0; i < n; i++) d[size + i] = a[i];
        for (int i = size - 1; i >= 1; i--) update(i);
    }

    void update(int k) { d[k] = op(d[k << 1], d[(k << 1) + 1]); }

    int bit_ceil(int n) {
        int x = 1;
        while (x < n) x <<= 1;
        return x;
    }

    void set(int p, T x) {
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    T get(int p) const {
        return d[p + size];
    }

    T prod(int l, int r) const {
        T sml = e(), smr = e();
        l += size;
        r += size;

        while (l < r) {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }

    T all_prod() const { return d[1]; }
};

int op(int v0, int v1) { return v0 + v1; }
int df() { return 0; }

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int& i: a) cin >> i;
    segtree<int, op, df> seg(a);
    int t, s, e;
    while (q--) {
        cin >> t >> s >> e;

        if (t == 1) {
            seg.set(s - 1, e);
        } else {
            cout << seg.prod(s - 1, e) << nl;
        }
    }
}


int32_t main() {
    fast
    solve();
}
