//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, tmp = 1, res = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        tmp *= i;
        res += tmp;
    }
    cout << res;
}