/**
 * SumOfThreeValues
 * 2:37 PM 6/14/2024
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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve() {
    fast
    int n, tmp, k, x;
    cin >> n >> x;
    int a[n];
    bool fail = true;
    unordered_map<int, unordered_set<int, custom_hash>, custom_hash> m;
    unordered_map<int, set<pair<int, int>>, custom_hash> m2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]].insert(i);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            m2[a[i] + a[j]].insert({i, j});
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            tmp = x - (a[i] + a[j]);

            if (m2.find(tmp) != m2.end()) {
                auto& s = m2[tmp];
                auto p = std::find_if(s.begin(), s.end(), [&](auto& p1) {
                    return p1.F != i and p1.S != i and p1.F != j and p1.S != j;
                });

                if (p != s.end()) {
                    cout << i + 1 << ' ' << j + 1 << ' ' << p->F + 1 << ' ' << p->S + 1 << ' ' << nl;
                    fail = false;
                    break;
                }
            }
        }

        if (not fail) break;
    }

    if (fail) {
        cout << "IMPOSSIBLE" << nl;
    }
}

//int32_t main() {solve();}
