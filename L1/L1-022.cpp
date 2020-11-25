//
// Created by Kain Zhang on 2020/10/31.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, odd = 0, even = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num & 1) odd++;
        else even++;
    }
    cout << odd << " " << even;
}