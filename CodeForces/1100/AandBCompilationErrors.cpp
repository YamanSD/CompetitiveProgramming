/**
 * AandBCompilationErrors
 * 9:05 AM 6/16/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    int n, tmp;
    cin >> n;
    map<int, int> s0, s1;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s0[tmp]++;
    }

    for (int j = 1; j <= 2; j++) {
        s1.clear();
        for (int i = 0; i < n - j; i++) {
            cin >> tmp;
            s1[tmp]++;
        }

        for (auto& p: s0) {
            if (p.S > s1[p.F]) {
                p.S--;
                cout << p.F << nl;
                break;
            }
        }
    }
}

int32_t main() { solve(); }
