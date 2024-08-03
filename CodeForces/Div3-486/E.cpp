/**
 * 16:28:36 8/3/24
 * E
 */
// ./CodeForces/Div3-486/E.cpp
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
#define EPS 1e-9l
#define pii pair<int, int>
#define vi vector<int>
#define P complex<int>
#define X real()
#define Y imag()
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    string s;
    cin >> s;
    string pat[]{"00", "25", "50", "75"};
    string pat1[]{"52", "05", "57"};
    int n = (int)s.size();
    vector<int> z;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') z.push_back(i);
        mp[s[i]] = i;
    }

    for (auto& p: pat) {
        if (s.ends_with(p)) {
            cout << 0;
            return;
        }
    }
    for (auto& p: pat1) {
        if (s.ends_with(p)) {
            cout << 1;
            return;
        }
    }

    int mn = INF, sz = (int)z.size();
    if (sz >= 2) {
        mn = min(mn, (n - 2 - z[sz - 2]) + (n - 1 - z[sz - 1]));
    }
    if(mp.count('2') and mp.count('5')) {
        int num = 1;
        while (s[num] == '0') num++;
        mn = min(mn, (n-2-mp['2']) + (n-1-mp['5']) + (mp['2'] > mp['5']) + ((s[1] && (s[0] == '2' || s[0] == '5'))?num-1:0));
    }
    if(mp.count('7') && mp.count('5')) {
        int num = 1;
        while(s[num]=='0')num++;
        mn = min(mn,(n-2-mp['7']) + (n-1-mp['5']) + (mp['7'] > mp['5']) + ((s[1] && (s[0] == '7' || s[0] == '5'))?num-1:0));
    }
    if(mp.count('5') && mp.count('0')) {
        mn = min(mn,(n-2-mp['5']) + (n-1-mp['0']) + (mp['5'] > mp['0']));
    }
    if(mn == INF)cout << -1;
    else  cout << mn;
}

int32_t main() {
    fast
    solve();
}
