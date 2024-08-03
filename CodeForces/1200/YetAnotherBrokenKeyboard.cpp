/**
 * 15:23:52 8/2/24
 * YetAnotherBrokenKeyboard
 */
// ./CodeForces/1200/YetAnotherBrokenKeyboard.cpp
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
    int n, k;
    string s;
    set<char> a;
    char ch;
    cin >> n >> k >> s;
    for (int i = 0; i < k; i++) {
        cin >> ch;
        a.insert(ch);
    }

    vector<int> v{0};
    for (char c: s) {
        if (a.count(c)) v.back()++;
        else if (v.back() != 0) v.push_back(0);
    }
    int res = 0;
    for (int i: v) res += (i * (i + 1)) / 2;
    cout << res << nl;
}

int32_t main() {
    fast
    solve();
}
