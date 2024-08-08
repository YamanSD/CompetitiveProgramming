/**
 * 13:08:41 8/6/24
 * F
 */
// ./CodeForces/Div4-859/F.cpp
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
#define LT int T; cin >> T; while (T--)
template<typename T>
using vector2d = vector<vector<T>>;
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, m, x1, y1, x2, y2;
    string d_string;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    x1--;x2--;y1--;y2--;
    cin >> d_string;
    int d = (d_string[0] == 'U' ? 1+(d_string[1] == 'R' ? 2 : 0) : 0+(d_string[1] == 'R' ? 2 : 0));
    bool vis[n][m][4];
    memset(vis, false, sizeof(vis));
    int i = x1, j = y1;
    int bounces = 0;
    while(!vis[i][j][d])
    {
        if(i == x2 && j == y2){cout << bounces << endl; return;}
        int na = 0;
        if(d%2 == 1 && i == 0){d-=1;na++;}
        if(d%2 == 0 && i == n-1){d+=1;na++;}
        if(d >= 2 && j == m-1){d-=2;na++;}
        if(d < 2 && j == 0){d+=2;na++;}
        bounces+=min(1ll, na);
        if(vis[i][j][d])
        {
            break;
        }
        vis[i][j][d] = true;
        if(d%2 == 1){i--;}else{i++;}
        if(d >= 2){j++;}else{j--;}
    }
    cout << -1 << endl;
}

int32_t main() {
    fast
    LT solve();
}
