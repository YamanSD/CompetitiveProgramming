/**
 * 16:13:41 6/25/24
 * KefaAndPark
 */
// ./CodeForces/1500/KefaAndPark.cpp
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
#define INF 1000000000000000000ll
#define MOD 1000000007ll
#define pii pair<int, int>
template<typename T>
using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

struct Node {
    bool isCat = false;
    int weight = 0;
    vector<Node*> c;
};

int solve(Node* p, Node *n, int m) {
    if (n->weight > m) {
        return 0;
    } else if (n->c.size() == 1 and n->c[0] == p) {
        return 1;
    }

    int res = 0;
    for (auto c: n->c) {
        if (c != p) {
            if (c->isCat and n->isCat)
                c->weight += n->weight;
            res += solve(n, c, m);
        }
    }

    return res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    Node ns[n];
    for (int i = 0; i < n; i++) {
        cin >> ns[i].isCat;
        if (ns[i].isCat) {
            ns[i].weight++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        int s, e;
        cin >> s >> e;
        ns[s - 1].c.push_back(&ns[e - 1]);
        ns[e - 1].c.push_back(&ns[s - 1]);
    }

    cout << solve(nullptr, &ns[0], m) << nl;
}

int32_t main() {
    fast
    solve();
}
