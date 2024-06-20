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
    cout << "Hell to the worlds!" << endl;
}
/**
 * int x = -1;
 *
 * for (int b = z; b >= 1; b /= 2) {
 *      while (not ok(x + b)) x += b;
 * }
 *
 * int k = x + 1;
 */

/**
 * int l = -1, r = 2e10;
   while (r - l > 1) {
       int m = (r + l) / 2;
       if (ok(m, h, a, c, n)) {
            r = m; // 0 = f(l) < f(m) = 1
       } else {
            l = m; // 0 = f(m) < f(r) = 1
       }
   }
 */

/**
 * int x = -1;
 *
 * for (int b = z; b >= 1; b /= 2) {
 *      while (f(x + b) < f(x + b + 1)) x += b;
 * }
 *
 * int k = x + 1;
 */

/**
 * pair<int, pair<int, int>> maxsub(const vector<int>& v, int n, int w = -1, int start = 0, int end = -1) {
    if (end == -1) {
        end = n;
    }

    if (w == -1) {
        int res = LONG_LONG_MIN, cur = 0, l = 0, r = 0, s = 0;
        for (int i = start; i < end; i++) {
            cur += v[i];

            if (res < cur) {
                res = cur;
                l = s;
                r = i;
            }

            if (cur < 0) {
                cur = 0;
                s = i + 1;
            }
        }

        return {res, {l, r}};
    }

    int l = 0, r = w - 1, sm = 0, res;
    for (int i = start; i < end and i < w; i++) {
        sm += v[i];
    }
    res = sm;

    for (int i = start + 1; i + w - 1 < end; i++) {
        sm += v[w + i - 1] - v[i - 1];

        if (sm > res) {
            l = i;
            r = i + w - 1;
            res = sm;
        }
    }

    return {res, {l, r}};
}

 */

//int moduloMultiplication(int a, int b) {
//    long long res = 0; // Initialize result
//
//    // Update a if it is more than
//    // or equal to mod
//    a %= MOD;
//
//    while (b) {
//        // If b is odd, add a with result
//        if (b & 1)
//            res = (res + a) % MOD;
//
//        // Here we assume that doing 2*a
//        // doesn't cause overflow
//        a = (2 * a) % MOD;
//
//        b >>= 1; // b = b / 2
//    }
//
//    return res;
//}

/**
 * int modBinExp(int b, int e) {
    if (e == 0) {
        return 1;
    }

    int res = modBinExp(b, e / 2);
    if (e % 2) {
        return (((res * res) % MOD) * b) % MOD;
    }

    return (res * res) % MOD;
}
 */

//class FenwickTree {
//private:
//    size_t n;
//    int *t;
//
//    void construct(const vector<int>& a) {
//        for (int i = 0; i < size(); i++) {
//            add(i, a[i]);
//        }
//    }
//public:
//    [[nodiscard]] size_t size() const {
//        return n;
//    }
//
//    [[nodiscard]] int* begin() const {
//        return t;
//    }
//
//    [[nodiscard]] int* end() const {
//        return t + size();
//    }
//
//    [[nodiscard]] int sum(int r) const {
//        int ret = 0;
//        for (; r >= 0; r = (r & (r + 1)) - 1) {
//            ret += t[r];
//        }
//        return ret;
//    }
//
//    [[nodiscard]] int sum(int l, int r) const {
//        return sum(r) - sum(l - 1);
//    }
//
//    void add(int idx, int delta) {
//        for (; idx < n; idx = idx | (idx + 1)) {
//            t[idx] += delta;
//        }
//    }
//
//    explicit FenwickTree(const vector<int>& a): n{a.size()} {
//        t = new int[size()];
//        memset(t, 0, sizeof(int) * size());
//        construct(a);
//    }
//
//    ~FenwickTree() {
//        delete t;
//    }
//};

/**
 * Separator
 */

//class MinFenwickTree {
//private:
//    size_t n;
//    vector<int> t;
//    const int INF = (int)1e9;
//
//    void construct(const vector<int>& a) {
//        for (int i = 0; i < size(); i++) {
//            update(i, a[i]);
//        }
//    }
//public:
//    [[nodiscard]] size_t size() const {
//        return n;
//    }
//
//    void update(int idx, int val) {
//        for (; idx < size(); idx = idx | (idx + 1)) {
//            t[idx] = min(t[idx], val);
//        }
//    }
//
//    int get(int r) {
//        int ret = INF;
//        for (; r >= 0; r = (r & (r + 1)) - 1)
//            ret = min(ret, t[r]);
//        return ret;
//    }
//
//    explicit MinFenwickTree(const vector<int>& a): n{a.size()} {
//        t = vector<int>(size(), INF);
//        construct(a);
//    }
//};

/**
 * struct FenwickTree2D {
    vector<vector<int>> bit;
    int n, m;

    // init(...) { ... }

    int sum(int x, int y) {
        int ret = 0;
        for (int i = x; i >= 0; i = (i & (i + 1)) - 1)
            for (int j = y; j >= 0; j = (j & (j + 1)) - 1)
                ret += bit[i][j];
        return ret;
    }

    void add(int x, int y, int delta) {
        for (int i = x; i < n; i = i | (i + 1))
            for (int j = y; j < m; j = j | (j + 1))
                bit[i][j] += delta;
    }
};
 */
