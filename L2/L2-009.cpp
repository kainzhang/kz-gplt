//
// Created by Kain Zhang on 2020/10/16.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int no, bag = 0, sum = 0;
    bool operator < (const Node &x) const {
        if (sum == x.sum) {
            if (bag == x.bag) {
                return no < x.no;
            }
            return bag > x.bag;
        }
        return sum > x.sum;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<Node> vec(N);
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        vec[i].no = i + 1;
        while (K--) {
            int n, p;
            cin >> n >> p;
            vec[n - 1].bag++;
            vec[n - 1].sum += p;
            vec[i].sum -= p;
        }
    }
    sort(vec.begin(), vec.end());
    for (Node &i : vec) {
        printf("%d %.2f\n", i.no, i.sum * 1.0 / 100);
    }
}