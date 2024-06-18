/**
 * IncreasingSubsequence
 * 1:56 PM 6/18/2024
 */
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
#define F first
#define S second
#define INF ((int)1e18)
#define MOD ((int)1e9 + 7)
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n;
    cin >> n;
    int a[n];
    vector<int> s;
    for (int& i: a) cin >> i;

    for (int i: a) {
        int idx = std::lower_bound(s.begin(), s.end(), i) - s.begin();

        if (idx == s.size()) {
            s.push_back(i);
        } else {
            s[idx] = i;
        }
    }

    cout << s.size() << nl;
}

int32_t main() { solve(); }
/**
* 8
7 3 5 3 6 2 9 8
1 1 2 1 3 1 2 2
*/