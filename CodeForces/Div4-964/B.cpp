/**
 * 15:42:12 8/6/24
 * B
 */
// ./CodeForces/Div4-964/B.cpp
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

int countSuneetWins(int a, int b, int x, int y) {
    int suneet_wins = 0;

    // Combination 1: Suneet a, Slavic x; Suneet b, Slavic y
    int suneet_round_wins = 0;
    int slavic_round_wins = 0;
    if (a > x) suneet_round_wins++;
    else if (a < x) slavic_round_wins++;
    if (b > y) suneet_round_wins++;
    else if (b < y) slavic_round_wins++;
    if (suneet_round_wins > slavic_round_wins) suneet_wins++;

    // Combination 2: Suneet a, Slavic y; Suneet b, Slavic x
    suneet_round_wins = 0;
    slavic_round_wins = 0;
    if (a > y) suneet_round_wins++;
    else if (a < y) slavic_round_wins++;
    if (b > x) suneet_round_wins++;
    else if (b < x) slavic_round_wins++;
    if (suneet_round_wins > slavic_round_wins) suneet_wins++;

    // Combination 3: Suneet b, Slavic x; Suneet a, Slavic y
    suneet_round_wins = 0;
    slavic_round_wins = 0;
    if (b > x) suneet_round_wins++;
    else if (b < x) slavic_round_wins++;
    if (a > y) suneet_round_wins++;
    else if (a < y) slavic_round_wins++;
    if (suneet_round_wins > slavic_round_wins) suneet_wins++;

    // Combination 4: Suneet b, Slavic y; Suneet a, Slavic x
    suneet_round_wins = 0;
    slavic_round_wins = 0;
    if (b > y) suneet_round_wins++;
    else if (b < y) slavic_round_wins++;
    if (a > x) suneet_round_wins++;
    else if (a < x) slavic_round_wins++;
    if (suneet_round_wins > slavic_round_wins) suneet_wins++;

    return suneet_wins;
}

void solve() {
    vector<int> a(4);
    for (int& i: a) cin >> i;
    cout << countSuneetWins(a[0], a[1], a[2], a[3]) << nl;
}

int32_t main() {
    fast
    LT solve();
}
