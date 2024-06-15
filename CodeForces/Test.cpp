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
