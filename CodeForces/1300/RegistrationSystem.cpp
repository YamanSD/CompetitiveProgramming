/**
 * RegistrationSystem
 * 2:52 PM 6/6/2024
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
    int n;
    cin >> n;
    map<string, int> m;
    string s;
    while (n--) {
        cin >> s;
        if (m[s]) {
            cout << (s + to_string(m[s])) << nl;
        } else {
            cout << "OK" << nl;
        }

        m[s]++;
    }
}
