/**
 * 17:52:46 7/15/24
 * C
 */
// ./CodeForces/Div2-958/C.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ranges>

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
        vector<int> a;
        a.push_back(n);
        int cur = n, d = 1, cnt = 2;
        while (cur > d) {
            cur -= d;
            cnt--;
            if (cnt == 0) {
                cnt = d;
                d *= 2;
            }
            if ((cur | a.back()) == n) a.push_back(cur);
        }
        cout << a.size() << nl;
        for (int& i: ranges::reverse_view(a)) {
            cout << i << ' ';
        }
        cout << nl;
    }
}

int32_t main() {
    fast
    solve();
}
