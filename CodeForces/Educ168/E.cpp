/**
 * 19:30:59 7/30/24
 * E
 */
// ./CodeForces/Educ168/E.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = ordered_set<int>;

struct query {
    int i, j;

    bool operator<(const query& q) const {
        return i < q.i;
    }
};

void solve() {
    // https://codeforces.com/contest/1997/problem/E
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int& i: a) cin >> i;
    vector2d<query> q(n + 1);
    for (int j = 0; j < m; j++) {
        int i, x;
        cin >> i >> x;
        q[x].emplace_back(i - 1, j);
    }
    for (auto& v: q) {
        sort(v.rbegin(), v.rend());
    }
    vector<int> ord(n), cur(n + 1);
    vector<bool> res(m);

    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int i, int j){
        return a[i] > a[j];
    });

    indexed_set alive(ord.begin(), ord.end());
    for (int lvl = 1; lvl <= n; lvl++) {
        for (int k = 1; k <= n; k++) {
            if (cur[k] >= n) break; // We exauhsted all the queries for this k

            // Current index for this k
            int x = (int)alive.order_of_key(cur[k]);

            // Current index for this k that is still available in ord; we iterate over 1k, 2k, 3k, etc.
            int nxt = x + k - 1 >= (int)alive.size()
                      ? n // Set to k not alive.size() due to the constraints on the queries
                      : *alive.find_by_order(x + k - 1);

            // We check all the queries for k whose index we passed
            while (not q[k].empty() and q[k].back().i <= nxt) {
                res[q[k].back().j] = (a[q[k].back().i] >= lvl);
                q[k].pop_back();
            }

            // Go to the next index
            cur[k] = nxt + 1;
        }

        while (not ord.empty() and a[ord.back()] == lvl) {
            alive.erase(ord.back());
            ord.pop_back();
        }
    }

    for (auto b: res) if (b) YES else NO
}

int32_t main() {
    fast
    solve();
}
