/**
 * 15:18:55 7/8/24
 * BoatsCompetition
 */
// ./CodeForces/1200/BoatsCompetition.cpp
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& i: a) cin >> i;
        sort(a.begin(), a.end());
        const int mins = 2, maxs = 100;
        int res = 0;
        for (int s = mins; s <= maxs; s++) {
            int tmp = 0;
            multiset<int> p;

            for (int i = 0; i < n; i++) {
                auto r = p.find(s - a[i]);
                bool in = false;
                if (r != p.end()) {
                    p.erase(r);
                    in = true;
                    tmp++;
                }

                if (not in)
                    p.insert(a[i]);
            }

            res = max(res, tmp);
        }

        cout << res << nl;
    }
}

int32_t main() {
    fast
    solve();
}
