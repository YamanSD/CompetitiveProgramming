/**
 * 19:21:52 7/14/24
 * Parallelepiped
 */
// ./CodeForces/1100/Parallelepiped.cpp
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

void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int a=sqrt((x*y)/z);
    int b=sqrt((x*z)/y);
    int c=sqrt((y*z)/x);
    int val=(a+b+c)*4;
    cout<<val;
}

int32_t main() {
    fast
    solve();
}
