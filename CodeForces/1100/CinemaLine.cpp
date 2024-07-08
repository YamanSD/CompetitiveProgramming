/**
 * 14:33:10 7/8/24
 * CinemaLine
 */
// ./CodeForces/1100/CinemaLine.cpp
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
    int n;
    cin >> n;
    int a[n];
    for (int& i: a) cin >> i;

    map<int, int> cnt;
    for (int i: a) {
        if (i == 25) {
            cnt[i]++;
        } else if (i == 50) {
            if (cnt[25]) {
                cnt[25]--;
            } else {
                NO
                return;
            }

            cnt[50]++;
        } else {
            if (cnt[25]) {
                if (cnt[50]) {
                    cnt[25]--;
                    cnt[50]--;
                } else if (cnt[25] >= 3) {
                    cnt[25] -= 3;
                } else {
                    NO;
                    return;
                }
            } else {
                NO
                return;
            }
        }
    }
    YES
}

int32_t main() {
    fast
    solve();
}
