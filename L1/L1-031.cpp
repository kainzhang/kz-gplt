//
// Created by Kain Zhang on 2020/11/16.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, h, w;
    cin >> n;
    while (n--) {
        cin >> h >> w;
        double sw = (h - 100) * 0.9;
        if (fabs(w * 1.0 / 2 - sw) < sw * 0.1) {
            cout << "You are wan mei!\n";
        } else if (w * 1.0 / 2 - sw >= sw * 0.1) {
            cout << "You are tai pang le!\n";
        } else {
            cout << "You are tai shou le!\n";
        }
    }
}