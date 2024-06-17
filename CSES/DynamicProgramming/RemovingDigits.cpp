/**
 * RemovingDigits
 * 8:38 AM 6/17/2024
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


deque<int> digits(int n) {
    if (n == 0) {
        return {0};
    }

    deque<int> res;

    while (n) {
        res.push_front(n % 10);
        n /= 10;
    }

    return res;
}

void solve() {
    fast
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = 0;

    for (int i = 1; i <= n; i++) {
        const auto& v = digits(i);
        a[i] = INF;

        for (int d: v) {
            a[i] = min(a[i], a[i - d] + 1);
        }
    }

    cout << a[n] << nl;
}

int32_t main() { solve(); }
