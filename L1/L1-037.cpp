//
// Created by Kain Zhang on 2020/11/18.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << "/";
    if (b < 0) {
        cout << "(" << b << ")=";
    } else if (b > 0) {
        cout << b << "=";
    } else {
        cout << "0=Error";
        return 0;
    }
    cout << setprecision(2) << fixed;
    cout << a * 1.0 / b;
}