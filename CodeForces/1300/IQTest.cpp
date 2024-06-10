/**
 * IQTest
 * 2:39 PM 6/6/2024
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
    int n, k = 0, a, arr[3];
    cin >> n;

    for (int& i: arr) {
        cin >> i;
        n--;
    }

    bool isDone = false;
    bool isOdd = (arr[0] % 2) + (arr[1] % 2) + (arr[2] % 2) >= 2;
    for (int i: arr) {
        k++;
        if ((i % 2) ^ isOdd) {
            isDone = true;
            break;
        }
    }

    while (n-- and not isDone) {
        cin >> a;
        k++;
        if ((a % 2) ^ isOdd) {
            break;
        }
    }

    cout << k << nl;
}
