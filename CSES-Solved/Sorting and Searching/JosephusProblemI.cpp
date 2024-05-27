//#include <bits/stdc++.h>
//
//#include <memory>
//#define int long long
//#define unsigned unsigned int
//#define double long double
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
//
//
//using namespace std;
//
//
//class Node {
//public:
//    int val;
//    Node* prev;
//    Node* next;
//
//    explicit Node(int value) : val(value), prev(nullptr), next(nullptr) {}
//};
//
//int n;
//
//void solve() {
//    fast
//    cin >> n;
//    auto root{new Node(1)};
//    auto cur{root};
//
//    for (int i{2}; i <= n; i++) {
//        cur->next = new Node(i);
//        cur->next->prev = cur;
//        cur = cur->next;
//    }
//
//    cur->next = root;
//    root->prev = cur;
//    cur = root->next;
//    Node *temp;
//
//    while (cur != cur->next) {
//        cout << cur->val << ' ';
//
//        temp = cur->next;
//        cur->prev->next = cur->next;
//        temp->prev = cur->prev;
//        temp = cur;
//        cur = cur->next->next;
//        temp->next = nullptr;
//        temp->prev = nullptr;
//    }
//
//    cout << cur->next->val << '\n';
//}
//
//int32_t main() {
//    solve();
//}
