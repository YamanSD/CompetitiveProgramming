/**
 * 19:05:38 7/1/24
 * SimilarPairs
 */
// ./CodeForces/1100/SimilarPairs.cpp
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
        int n, oc = 0, ec = 0;
        cin >> n;
        int a[n];
        set<int> s;
        for (int& i: a) {
            cin >> i;
            if (i % 2) ec++;
            else oc++;
            s.insert(i);
        }

        if (oc % 2 == 0 and ec % 2 == 0) {
            YES
            continue;
        }

        bool fail = true;
        for (auto v: s) {
            if (
                s.find(v - 1) != s.end()
                or s.find(v + 1) != s.end()
            ) {
                fail = false;
                break;
            }
        }

        if (fail) NO else YES
    }
}

int32_t main() {
    fast
    solve();
}
