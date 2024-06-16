/**
 * TwoTeamsComposing
 * 9:24 AM 6/16/2024
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
#define F first
#define S second
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    fast
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t, n, a[200001];
    cin >> t;
    while(t--) {
        map<int,int> mp;
        map<int,int>::iterator itr;
        set<int> s;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }

        int m = 0;
        for (itr = mp.begin(); itr != mp.end(); itr++) {
            int d = itr->second;
            m = max(m, d);
        }
        int team1, team2;
        team1 = s.size();
        team2 = m;
        if(team1 > team2){
            cout << team2 << endl;
        } else if (team1 < team2){
            cout << team1 << endl;
        } else {
            cout << team1 - 1 << endl;
        }
    }
}

int32_t main() { solve(); }
