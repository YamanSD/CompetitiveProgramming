/**
 * 17:58:10 8/8/24
 * Hamburgers
 */
// ./CodeForces/1600/Hamburgers.cpp
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define uint unsigned int
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

int pb, pc, ps;
int nb, nc, ns;
int lb, lc, ls;
int fb, fc, fs;

//i have nb,nc,ns brea,cheese and sausage
//i need lb,lc,ls to make a single burger, assuming i would make x
//the function returns the extra money needed
int price(int x)
{
    fb = max(x*lb - nb, (int)0);
    fc = max(x*lc - nc, (int)0);
    fs = max(x*ls - ns, (int)0);

    int p = fb*pb + fc*pc + fs*ps;
    return p;
}

void solve() {
    int i, j, k;
    int n, m;
    int r;
    string s;

    cin >> s;

    n = s.length();
    lb = lc = ls = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'B')lb++;
        else if (s[i] == 'C')lc++;
        else ls++;
    }

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    //binary search
    int high, low, mid, z, ans = 0;
    low = 0, high = r + 1000, mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        z = price(mid);
        if (z == r)
        {
            cout << mid << endl;
            return;
        }

        if (z > r)
            high = mid - 1;

        else
            low = mid + 1, ans = mid;
    }

    cout << ans << endl;

}

int32_t main() {
    fast
    solve();
}
