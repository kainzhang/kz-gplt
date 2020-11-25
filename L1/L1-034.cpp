//
// Created by Kain Zhang on 2020/11/18.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, mx = 0;
    cin >> N;
    map<int, int> mp;
    while (N--) {
        int K, F;
        cin >> K;
        while (K--) {
            cin >> F;
            mp[F]++;
            mx = max(mp[F], mx);
        }
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        if (it->second == mx) {
            cout << it->first << " " << it->second;
            break;
        }
    }
}