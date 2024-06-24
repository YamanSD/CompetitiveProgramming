#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        auto get_range = [&] (int i) {
            if (s[i] == '1') return make_pair(i, i);
            int l = -1, r = -1;
            if (i > 0 && t[i-1] == '1') l = i-1;
            else if (i > 1 && t[i-1] == '0' && s[i-2] == '0') l = i-2;
            if (i+1 < n && t[i+1] == '1') r = i+1;
            else if (i+2 < n && t[i+1] == '0' && s[i+2] == '0') r = i+2;
            if (l == -1) r = -1;
            if (r == -1) l = -1;
            return make_pair(l, r);
        };

        vector<int> pref(n+1);
        for (int i = 0; i < n; i++) pref[i+1] = pref[i] + (get_range(i).first != -1);

        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            int ans = 0;
            if (r-l <= 5) {
                for (int i = l-1; i < r; i++) {
                    auto [ll, rr] = get_range(i);
                    if (ll >= l-1 && rr < r) ans++;
                }
            }
            else {
                ans = pref[r] - pref[l-1];
                for (int j: {l-1, l, r-2, r-1}) {
                    auto [ll, rr] = get_range(j);
                    if (ll != -1 && (ll < l-1 || rr >= r)) ans--;
                }
            }
            cout << ans << '\n';
        }
    }
}