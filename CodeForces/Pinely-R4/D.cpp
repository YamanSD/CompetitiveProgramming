/**
 * 14:35:19 7/29/24
 * D
 */
// ./CodeForces/Pinely-R4/D.cpp
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
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n < 6) {
            if (n == 1)
                cout << 1 << '\n' << "1" << '\n';
            else if (n == 2)
                cout << 2 << '\n' << "1 2" << '\n';
            else if (n == 3)
                cout << 2 << '\n' << "1 2 2" << '\n';
            else if (n == 4)
                cout << 3 << '\n' << "1 2 2 3" << '\n';
            else if (n == 5)
                cout << 3 << '\n' << "1 2 2 3 3" << '\n';
        } else {
            cout << 4 << '\n';
            for (int i = 1; i <= n; i++)
                cout << i % 4 + 1 << ' ';
            cout << '\n';
        }
    }
}

int32_t main() {
    fast
    solve();
}
