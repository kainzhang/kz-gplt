//
// Created by Kain Zhang on 2020/10/31.
//

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> K;
        for (int j = 0; j < K; j++) {
            int id;
            cin >> id;
            mp[id] += K;
        }
    }
    cin >> M;
    int flag = 0;
    while (M--) {
        int id;
        cin >> id;
        if (mp[id] < 2) {
            if (flag++) printf(" ");
            printf("%05d", id);
            mp[id] = 3;
        }
    }
    if (!flag) {
        printf("No one is handsome");
    }
}