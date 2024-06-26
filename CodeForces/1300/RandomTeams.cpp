/**
 * RandomTeams
 * 4:27 PM 6/6/2024
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
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

int pairs(int n) {
    return n * (n - 1) / 2;
}

void solve() {
    fast
    int n, m;
    cin >> n >> m;
    int a(n / m), b(n % m);
    int min = pairs(a) * (m - b) + pairs(a + 1) * b;
    int max = pairs(n - m + 1);
    cout << min << " " << max << endl;
}

int32_t main() { solve(); }
