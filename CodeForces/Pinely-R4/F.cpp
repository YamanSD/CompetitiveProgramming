/**
 * 14:57:29 7/29/24
 * F
 */
// ./CodeForces/Pinely-R4/F.cpp
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
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

using T = map<int, int>;
T add(T v0, const T& v1) {
    for (auto& p: v1) v0[p.F] += p.S;
    return v0;
}

T sub(T v0, const T& v1) {
    for (auto& p: v1) v0[p.F] -= p.S;
    return v0;
}

int dif(T& v0, T& v1) {
    int need0 = 0, need1 = 0;
    for (auto& p0: v0) {
        int vv0 = p0.S, vv1 = v1[p0.F];
        if (vv0 < vv1) {
            need0 += vv1 - vv0;
        }
    }
    for (auto& p1: v1) {
        int vv0 = v0[p1.F], vv1 = p1.S;
        if (vv1 < vv0) {
            need1 += vv0 - vv1;
        }
    }
//    cout << need0 << ' ' << need1 << nl;
    return max(need0, need1);
}

void solve() {
    int n, q, ii;
    cin >> n >> q;
    map<int, int> pre[n + 1];
    pre[0] = {};
    for (int i = 1; i <= n; i++) {
        cin >> ii;
        pre[i] = add(pre[i - 1], {{ ii, 1 }});
    }
    int l, r;
    while (q--) {
        // TODO
        cin >> l >> r;
//        cout << nl << nl;
        auto m{sub(pre[r], pre[l - 1])};

        int res = 0;
        for (auto p = m.begin(); p != m.end(); p++) {
            int v = p->F, cnt = p->S;
            if (res >= 2) break;
            if (cnt == 0) continue;

            auto p1 = m.upper_bound(v);
            if (p1 != m.end()) {
                int v1 = p1->F, cnt1 = p1->S;

                if (cnt1) {
                    auto p2 = m.upper_bound(v1);

                    if (p2 != m.end()) {
                        int v2 = p2->F, cnt2 = p2->S;
//                        cout << v << ' ' << v1 << ' ' << v2 << nl;

                        if (cnt2) {
                            int mn = min(cnt, min(cnt1, cnt2));
//                            cout << "MN: " << mn << nl;
                            m[v] -= mn;
                            m[v1] -= mn;
                            m[v2] -= mn;
                            res += mn;
                        }
                    }
                }
            }
        }
        if (res < 2) {
            for (auto p = m.begin(); p != m.end(); p++) {
                int v = p->F, cnt = p->S;
                if (cnt == 0) continue;
                else if (cnt >= 2) {
                    auto p1 = m.upper_bound(2 * v);
                    if (p1 != m.end()) {
                        int v1 = p1->F, cnt1 = p1->S;
                        m[cnt] -= 2;
                        m[cnt1]--;
                        res++;
                    }
                } else {

                }
            }
        }
        if (res >= 2) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
