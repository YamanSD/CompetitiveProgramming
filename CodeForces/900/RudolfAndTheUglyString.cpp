/**
 * RudolfAndTheUglyString
 * 11:46 AM 5/30/2024
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

int count(const string& s, const string& subs) {
    int occurrences = 0;
    size_t pos = 0;

    while ((pos = s.find(subs, pos)) != string::npos) {
        occurrences++;
        pos++;
    }

    return occurrences;
}

void solve() {
    fast
    int t, n, cnt;
    string s;
    cin >> t;

    while (t--) {
        cin >> n >> s;
        cnt = 0;

        cnt += count(s, "map");
        cnt += count(s, "pie");
        cnt -= count(s, "mapie");

        cout << cnt << nl;
    }
}
