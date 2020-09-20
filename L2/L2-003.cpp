//
// Created by Kain Zhang on 2020/9/20.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    double vol, prs, avg;
    bool operator < (const Node &x) const {
        return avg > x.avg;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    double D;
    cin >> N >> D;
    vector<Node> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i].vol;
    }
    for (int i = 0; i < N; i++) {
        cin >> vec[i].prs;
        vec[i].avg = vec[i].prs / vec[i].vol;
    }
    sort(vec.begin(), vec.end());
    double ans = 0;
    for (Node &i : vec) {
        if (i.vol <= D) {
            D -= i.vol;
            ans += i.prs;
        } else {
            ans += D * i.avg;
            D = 0;
        }
        if (D == 0) break;
    }
    printf("%.2f", ans);
}