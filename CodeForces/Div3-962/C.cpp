/**
 * 17:46:34 7/26/24
 * C
 */
// ./CodeForces/Div3-962/C.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
//#define int long long
#define unsigned unsigned int
#define double long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl '\n'
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define EPS 1e-9l
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

using T = vector<int>;
T add(T v0, const T& v1) {
    for (int i = 0; i < 26; i++) v0[i] += v1[i];
    return v0;
}

T sub(T v0, const T& v1) {
    for (int i = 0; i < 26; i++) v0[i] -= v1[i];
    return v0;
}

int dif(T& v0, T& v1) {
    int need0 = 0, need1 = 0;
    for (int i = 0; i < 26; i++) {
        int vv0 = v0[i], vv1 = v1[i];
        if (vv0 < vv1) {
            need0 += vv1 - vv0;
        }
    }
    for (int i = 0; i < 26; i++) {
        int vv0 = v0[i], vv1 = v1[i];
        if (vv1 < vv0) {
            need1 += vv0 - vv1;
        }
    }
//    cout << need0 << ' ' << need1 << nl;
    return max(need0, need1);
}

void solve() {
    int t, n, q, s, e;
    string a, b;
    vector<T> am{{}}, bm{{}};
    cin >> t;
    while (t--) {
        cin >> n >> q >> a >> b;

        am.clear(), bm.clear();
        am.emplace_back(26, 0),
        bm.emplace_back(26, 0);
        for (char c: a) {
            vector<int> v(26, 0);
            v[c - 'a']++;
            am.push_back(add(am.back(), v));
        }
        for (char c: b) {
            vector<int> v(26, 0);
            v[c - 'a']++;
            bm.push_back(add(bm.back(), v));
        }

        while (q--) {
            cin >> s >> e;
            auto av = sub(am[e], am[s - 1]);
            auto bv = sub(bm[e], bm[s - 1]);
//
//            for (auto& v: av)
//                cout << v.F << ' ' << v.S << nl;
//            cout << nl;
//            for (auto& v: bv)
//                cout << v.F << ' ' << v.S << nl;
//            cout << "-----------\n";
            cout << dif(av, bv) << nl;
        }
    }
}

int32_t main() {
    fast
    solve();
}
