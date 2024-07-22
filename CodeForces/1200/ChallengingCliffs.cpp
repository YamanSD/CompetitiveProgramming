/**
 * 13:07:44 7/20/24
 * ChallengingCliffs
 */
// ./CodeForces/1200/ChallengingCliffs.cpp
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
#define NO (cout << "NO" << nl);
#define YES (cout << "YES" << nl);
#define F first
#define S second
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int& i: a) cin >> i;

        map<int, int> m;
        for (int i: a) m[i]++;
        int b0 = -1, b1 = INF;
        for (auto& p: m) {
            if (p.S > 1) {
                b0 = b1 = p.F;
                p.S -= 2;
                if (p.S == 0) m.erase(p.F);
                break;
            }
            auto p1 = m.upper_bound(p.F);
            if (p1 == m.end()) break; // Last element
            if (abs(b1 - b0) > abs(p1->F - p.F)) {
                b1 = p1->F;
                b0 = p.F;
            }
        }

        if (b0 != b1) {
            m[b0]--;
            if (m[b0] == 0) m.erase(b0);
            m[b1]--;
            if (m[b1] == 0) m.erase(b1);
        }

        int res[n];
        res[0] = b0;
        res[n - 1] = b1;
        int i = 0, cur = res[0];
        while (i < n - 2) {
            auto p = m.lower_bound(cur);
            if (p == m.end()) {
                cur = m.begin()->F;
                res[i + 1] = cur;
                m.begin()->S--;
                if (m.begin()->S == 0) m.erase(cur);
            } else {
                res[i + 1] = p->F;
                cur = res[i + 1];
                p->S--;
                if (p->S == 0) m.erase(p->F);
            }
            i++;
        }
        for(int j: res) cout << j << ' ';
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
