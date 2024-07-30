/**
 * 17:22:02 7/30/24
 * A
 */
// ./CodeForces/Educ168/A.cpp
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
        string a;
        cin >> a;
        char ch = 'a';
        bool done = false;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] == a[i + 1]) {
                while (ch == a[i] or ch == a[i + 1]) ch++;
                a.insert(a.begin() + i + 1, ch);
                done = true;
                break;
            }
        }
        if (not done) {
            while (ch == a.back()) ch++;
            a.push_back(ch);
        }

        cout << a << nl;
    }
}

int32_t main() {
    fast
    solve();
}
