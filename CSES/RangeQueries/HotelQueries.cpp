/**
 * 14:37:23 6/21/24
 * HotelQueries
 */
// ./CSES/RangeQueries/HotelQueries.cpp
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
#define pii pair<int, int>
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


template <class S, S (*op)(S, S), S (*e)()>
struct segtree {
    int n, size, log;
    vector<S> d;

    segtree(int n) : segtree(vector<S>(n, e())) {}

    segtree(const vector<S>& a) {
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

    void set(int p, S x) {
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    S get(int p) const {
        return d[p + size];
    }

    S prod(int l, int r) const {
        S sml = e(), smr = e();
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

    S all_prod() const { return d[1]; }
};

pii op(pii v0, pii v1) {
    if (v0.F != v1.F) {
        return v0.F < v1.F ? v1 : v0;
    }

    return v0.S < v1.S ? v0 : v1;
}
pii df() { return {-1, INF}; }

void solve() {
    int n, m, tmp;
    cin >> n >> m;
    vector<int> rs(m);
    vector<pii> h;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        h.emplace_back(tmp, i);
    }
    for (int& i: rs) cin >> i;
    segtree<pii, op, df> t(h);

    for (int i: rs) {
        if (t.all_prod().F < i) {
            cout << 0 << ' ';
            continue;
        }

        int l = 1, r = n;
        while (l < r) {
            int md = (l + r) / 2;
            auto tl = t.prod(l - 1, md);

            if (tl.F >= i) {
                r = md;
            } else {
                l = md + 1;
            }
        }

        auto p = t.get(l - 1);
        cout << l << ' ';
        t.set(l - 1, {p.F - i, l});
    }
}

int32_t main() {
    fast
    solve();
}
