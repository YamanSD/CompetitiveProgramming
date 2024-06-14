/**
 * RoomAllocation
 * 1:03 PM 6/14/2024
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

struct Person {
    int time, i;
    bool leave;

    bool operator<(const Person& p) const {
        return this->time != p.time ? this->time < p.time : this->leave < p.leave;
    }
};

void solve() {
    fast
    int n, tmp, k = 0;
    cin >> n;
    int rooms[n], room;
    set<int> av;
    vector<Person> a;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back({tmp, i, false});
        cin >> tmp;
        a.push_back({tmp, i, true});
    }
    std::sort(a.begin(), a.end());

    for (auto& p: a) {
        if (p.leave) {
            av.insert(rooms[p.i]);
        } else {
            if (av.empty()) {
                room = ++k;
            } else {
                auto it = av.lower_bound(0);
                room = *it;
                av.erase(it);
            }

            rooms[p.i] = room;
        }
    }

    cout << av.size() << nl;
    for (int r: rooms) cout << r << ' ';
    cout << nl;
}

//int32_t main() {solve();}
