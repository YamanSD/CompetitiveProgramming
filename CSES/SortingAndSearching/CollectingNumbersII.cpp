/**
 * CollectingNumbersII
 * 5:52 PM 6/12/2024
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
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

bool check(int& res, const pair<int, int> a[], int n, int i) {
    if (i < n - 1 and a[i].second > a[i + 1].second) {
        res++;
        return true;
    }

    return false;
}

void solve() {
    fast
    int n, m, res = 1;
    cin >> n >> m;
    int b[n];
    pair<int, int> a[n], op[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        b[i] = a[i].first;
        a[i].second = i;
    }
    for (auto& p: op) {
        cin >> p.first >> p.second;
        if (p.first > p.second) swap(p.first, p.second);
    }
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++) {
        check(res, a, n, i);
    }

    cout << res << nl;

    int i0, i1, res0 = res;
    for (auto& p: op) {
        // Did not finish, but the idea is that to swap the values and redo the check at the swapped positions and those before them
        cout << res << nl;
        res = res0;
//        swap(a[i0].second, a[i1].second);
    }
}

//int32_t main() {solve();}
