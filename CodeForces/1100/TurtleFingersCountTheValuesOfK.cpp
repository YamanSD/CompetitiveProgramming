/**
 * TurtleFingersCountTheValuesOfK
 * 12:11 PM 6/2/2024
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

double log(double b, double x) {
    return log(x) / log(b);
}

void solve() {
    fast
    int t, a, b, l;
    double k;
    cin >> t;

    while (t--) {
        cin >> a >> b >> l;

        // x_max = log_a(l)
        // y_max = log_b(l)
        // k_max = l
        set<int> has{};
        const auto mx = ceil(log(a, l)),
                    my = ceil(log(b, l));

        for (int x = 0; x <= mx; x++) {
            for (int y = 0; y <= my; y++) {
                k = 0;
                auto frac = modf(((double)l) / (pow(a, x) * pow(b, y)), &k);

                if (frac == 0.0l) {
                    has.insert((int)k);
                }
            }
        }

        cout << has.size() << nl;
    }
}
