/**
 * 16:16:40 7/14/24
 * PerfectNumber
 */
// ./CodeForces/1100/PerfectNumber.cpp
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

int sumOfDigits (int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve() {
    int k, j = 0;
    cin >> k;
    for (int i = 19; i < 11000000; i += 9) {
        if (sumOfDigits(i) == 10) {
            j++;
            if (j == k) {
                cout << i << nl;
                return;
            }
        }
    }
}

int32_t main() {
    fast
    solve();
}
