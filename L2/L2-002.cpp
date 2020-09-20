//
// Created by Kain Zhang on 2020/9/20.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val, addr, nxt;
};

unordered_map<int, Node> mp;
unordered_map<int, int> vis;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int L, N;
    cin >> L >> N;
    vector<Node> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i].addr >> vec[i].val >> vec[i].nxt;
        mp[vec[i].addr] = vec[i];
    }
    vector<Node> res, del;
    int S = L;
    while (S != -1) {
        Node n = mp[S];
        if (vis[abs(n.val)]++) {
            del.push_back(n);
        } else {
            res.push_back(n);
        }
        S = n.nxt;
    }
    printf("%05d %d", L, mp[L].val);
    int len = res.size();
    for (int i = 1; i < len; i++) {
        printf(" %05d\n%05d %d", res[i].addr, res[i].addr, res[i].val);
    }
    printf(" -1\n");
    len = del.size();
    for (int i = 0; i < len; i++) {
        printf("%05d %d ", del[i].addr, del[i].val);
        if (i == len - 1) {
            printf("-1");
        } else {
            printf("%05d\n", del[i + 1].addr);
        }
    }
}