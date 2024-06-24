/**
 * 13:29:06 6/23/24
 * PrefixSumQueries
 */
// ./CSES/RangeQueries/PrefixSumQueries.cpp
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
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

template <class S,
        S (*op)(S, S),
        S (*e)(),
        class F,
        S (*mapping)(F, S, int),
        F (*composition)(F, F),
        F (*id)()>
struct lazy_segtree {
    int n, size, log;
    vector<S> d;
    vector<F> lz;

    lazy_segtree(int n) : lazy_segtree(vector<S>(n, e())) {}

    lazy_segtree(const vector<S>& a) {
        n = a.size();
        size = bit_ceil(n);
        log = __builtin_ctz(size);
        d.resize(size << 1, e());
        lz.resize(size, id());
        for (int i = 0; i < n; i++) d[size + i] = a[i];
        for (int i = size - 1; i >= 1; i--) update(i);
    }

    void update(int k) { d[k] = op(d[k << 1], d[(k << 1) + 1]); }

    void all_apply(int k, F f) {
        d[k] = mapping(f, d[k], 1 << (log - __lg(k)));
        if (k < size) lz[k] = composition(f, lz[k]);
    }

    void push(int k) {
        all_apply(k << 1, lz[k]);
        all_apply((k << 1) + 1, lz[k]);
        lz[k] = id();
    }

    int bit_ceil(int n) {
        int x = 1;
        while (x < n) x <<= 1;
        return x;
    }

    void set(int p, S x) {
        p += size;
        for (int i = log; i >= 1; i--) push(p >> i);
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    S get(int p) {
        p += size;
        for (int i = log; i >= 1; i--) push(p >> i);
        return d[p];
    }

    S prod(int l, int r) {
        if (l == r) return e();
        l += size, r += size;

        for (int i = log; i >= 1; i--) {
            if (((l >> i) << i) != l) push(l >> i);
            if (((r >> i) << i) != r) push((r - 1) >> i);
        }

        S sml = e(), smr = e();
        while (l < r) {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }

        return op(sml, smr);
    }

    S all_prod() { return d[1]; }

    void apply(int p, F f) {
        p += size;
        for (int i = log; i >= 1; i--) push(p >> i);
        d[p] = mapping(f, d[p], 1);
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    void apply(int l, int r, F f) {
        if (l == r) return;
        l += size, r += size;

        for (int i = log; i >= 1; i--) {
            if (((l >> i) << i) != l) push(l >> i);
            if (((r >> i) << i) != r) push((r - 1) >> i);
        }

        {
            int l2 = l, r2 = r;
            while (l < r) {
                if (l & 1) all_apply(l++, f);
                if (r & 1) all_apply(--r, f);
                l >>= 1;
                r >>= 1;
            }
            l = l2;
            r = r2;
        }

        for (int i = 1; i <= log; i++) {
            if (((l >> i) << i) != l) update(l >> i);
            if (((r >> i) << i) != r) update((r - 1) >> i);
        }
    }
};

int op(int v0, int v1) { return max(v0, v1); }
int df() { return -INF; }
struct func {
    int v;
};
int mapping(func f, int v, int c) { return v + f.v; }
func composition(func f0, func f1) { return { f0.v + f1.v }; }
func id() { return {0}; }

void solve() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int& i: a) cin >> i;
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    lazy_segtree<int, op, df, func, mapping, composition, id> tree(pre);
    int t, k, u;
    while (q--) {
        cin >> t >> k >> u;

        if (t == 1) {
            tree.apply(k, n + 1, { u - a[k - 1] });
            a[k - 1] = u;
        } else {
            cout << max(tree.prod(k - 1, u + 1) - tree.get(k - 1), 0ll) << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
