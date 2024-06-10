/**
 * TPrimes
 * 2:58 PM 6/6/2024
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

void solve() {
    fast
    int n, x, rt;
    const int MAX = 1'000'001;
    vector<bool> notPrime(MAX); // sqrt(10**12)
    notPrime[0] = notPrime[1] = true;

    for (int i = 4; i < MAX; i += 2) {
        notPrime[i] = true;
    }
    for (int i = 3; i * i <= MAX; i += 2) {
        if (not notPrime[i]) {
            for (int j = i * i; j < MAX; j += 2 * i) {
                notPrime[j] = true;
            }
        }
    }

    cin >> n;

    while (n--) {
        cin >> x;
        rt = sqrt(x);
        if (not notPrime[rt] and rt * rt == x) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}
