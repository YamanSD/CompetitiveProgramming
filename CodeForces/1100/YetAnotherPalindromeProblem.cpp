/**
 * 16:02:11 7/14/24
 * YetAnotherPalindromeProblem
 */
// ./CodeForces/1100/YetAnotherPalindromeProblem.cpp
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

        vector<int> b{a[0]}, bb{0};
        for (int i: a) {
            if (b.back() != i) {
                b.push_back(i);
                bb.push_back(1);
            } else {
                bb.back()++;
            }
        }
        bool d = false;
        for (int i: bb) if (i >= 3) {
            d = true;
            break;
        }

        map<int, int> m;
        for (int i: b) {
            m[i]++;
        }
        for (auto& p: m) {
            if (p.S >= 2 and p.S < n) {
                d = true;
                break;
            }
        }
        if (d) YES else NO
    }
}

int32_t main() {
    fast
    solve();
}
