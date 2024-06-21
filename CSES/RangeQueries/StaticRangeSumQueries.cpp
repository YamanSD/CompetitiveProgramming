/**
 * 12:26:37 6/21/24
 * StaticRangeSumQueries
 */
// ./CSES/RangeQueries/StaticRangeSumQueries.cpp
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

class MinFenwickTree {
private:
    size_t n;
    vector<int> t;

    void construct(const vector<int>& a) {
        for (int i = 0; i < size(); i++) {
            update(i, a[i]);
        }
    }
public:
    [[nodiscard]] size_t size() const {
        return n;
    }

    void update(int idx, int val) {
        for (; idx < size(); idx = idx | (idx + 1)) {
            t[idx] = min(t[idx], val);
        }
    }

    int get(int r) {
        int ret = INF;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret = min(ret, t[r]);
        return ret;
    }

    explicit MinFenwickTree(const vector<int>& a): n{a.size()} {
        t = vector<int>(size(), INF);
        construct(a);
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    int a[n], sm[n + 1];
    sm[0] = 0;
    for (int& i: a) cin >> i;
    Fe
}

int32_t main() {
    fast
    solve();
}
