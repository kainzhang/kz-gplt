//
// Created by Kain Zhang on 2020/11/24.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int res = -1, num, cnt = 1;
    while (cin >> num) {
        if (num == 250 && res == -1) {
            res = cnt;
        }
        cnt++;
    }
    cout << res;
}