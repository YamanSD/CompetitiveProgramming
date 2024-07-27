# /**
#  * 13:12:04 7/24/24
#  * C
#  */
# // ./CodeForces/Div2-961/C.cpp
# #include <bits/stdc++.h>
# #include <ext/pb_ds/assoc_container.hpp>
# #include <ext/pb_ds/tree_policy.hpp>
#
# using namespace std;
# using namespace __gnu_pbds;
# #define int long long
# #define unsigned unsigned int
# #define double long double
# #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
# #define nl '\n'
# #define NO (cout << "NO" << nl);
# #define YES (cout << "YES" << nl);
# #define F first
# #define S second
# #define INF 1000000000000000000ll
# #define MOD 1000000007ll
# #define pii pair<int, int>
# #define P complex<int>
# #define X real()
# #define Y imag()
# template<typename T>
# using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
# using indexed_set = tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
#
# double log(int a, int b) {
#     return log2(a) / log2(b);
# }
#
# int f(int x, int y) {
#     return ceil(log2(log(y, x)));
# }
#
# void solve() {
#     int t;
#     cin >> t;
#     while (t--) {
#         int n;
#         cin >> n;
#         int a[n];
#         bool non = false, fail = false;
#         for (int& i: a) {
#             cin >> i;
#             if (i != 1) non = true;
#             else if (non) fail = true;
#         }
#         if (fail) {
#             cout << -1 << nl;
#             continue;
#         }
#
#         int res = 0;
#         for (int i = 1; i < n; i++) {
#             if (a[i] < a[i - 1]) {
#                 int d = f(a[i], a[i - 1]);
#                 res += d;
#                 while (d--) {
# //                    cout << a[i] << nl;
#                     a[i] *= a[i];
#                 }
# //                cout << a[i] << nl << "------\n";
#             }
#         }
#         cout << res << nl;
#     }
# }

from math import *

def f(a, b):
    return ceil(log2(log(b, a)))

def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        non = False
        fail = False
        for i in a:
            if i != 1: non = True
            elif non: fail = True

        if fail:
            print(-1)
            continue

        res = 0
        for i in range(1, len(a)):
            if a[i] < a[i - 1]:
                d = f(a[i], a[i - 1])
                res += d
                for _ in range(d):
                    a[i] *= a[i]
        print(res)

solve()
