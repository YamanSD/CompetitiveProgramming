/**
 * 17:08:15 7/20/24
 * DreamoonAndWiFi
 */
// ./CodeForces/1300/DreamoonAndWiFi.cpp
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
    string s0, s1;
    cin >> s0 >> s1;
    int d = 0;
    for (char c: s0) c == '+' ? d++ : d--;

    vector<int> p{0};
    for (char c: s1) {
        if (c == '+') {
            for (auto& i: p) i++;
        } else if (c == '-') {
            for (auto& i: p) i--;
        } else {
            vector<int> r;
            for (int i: p) {
                r.push_back(i - 1);
                r.push_back(i + 1);
            }
            p = r;
        }
    }
    double cnt = 0;
    for (int i: p) if (i == d) cnt++;
    printf("%.12Lf", cnt / p.size());
}

int32_t main() {
    fast
    solve();
}
