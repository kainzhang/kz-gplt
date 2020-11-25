//
// Created by Kain Zhang on 2020/10/31.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int D;
    cin >> D;
    D += 2;
    if (D > 7) D %= 7;
    cout << D;
}