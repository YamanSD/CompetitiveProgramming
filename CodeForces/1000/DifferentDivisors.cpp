/**
 * 14:27:52 7/15/24
 * DifferentDivisors
 */
// ./CodeForces/1000/DifferentDivisors.cpp
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


vector<int> generatePrime(int n)
{
    int x = 0, i = 2;
    bool flag;
    vector<int> res;
    while(x < n){
        flag = true;
        for(int j = 2; j * j <= i; j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            res.push_back(i);
            x++;
        }
        i++;
    }
    return res;
}

void solve() {
    int t;
    cin >> t;
    const auto& p{generatePrime(20001)};

    while (t--) {
        int d; cin >> d;
        int j = 0;
        while (p[j] - 1 < d) j++;
        int i = j + 1;
        while (p[i] - p[j] < d) i++;
        cout << p[j] * p[i] << nl;
    }
}

int32_t main() {
    fast
    solve();
}
