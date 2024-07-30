/**
 * 18:02:09 7/30/24
 * C
 */
// ./CodeForces/Educ168/C.cpp
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
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> a(n);
        for (char& c: a) cin >> c;
        set<int> s, sl;
        for (int i = 0; i < n; i++) {
            if (a[i] == ')') {
                s.insert(i);
            }
        }

        int rbs = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '(') {
                sl.insert(-i);
            } else if (a[i] == '_') {
                if (not sl.empty()) {
                    auto p = sl.begin();
                    int j = -(*p);
                    rbs += i - j;
                    sl.erase(-j);
                } else {
                    auto p = s.begin();
                    int j = *p;
                    rbs += j - i;
                    s.erase(j);
                }
            }
        }
        cout << rbs << nl;
    }
}

int32_t main() {
    fast
    solve();
}
