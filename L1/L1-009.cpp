//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int N, itg, num = 0, den = 1, a, b;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d/%d", &a, &b);
        num = num * b + a * den;
        den *= b;
        int t = gcd(abs(num), abs(den));
        num /= t;
        den /= t;
    }
    itg = num / den;
    num %= den;
    if (itg) {
        cout << itg;
        if (num) {
            cout << " " << num << "/" << den;
        }
    } else {
        if (num) {
            cout << num << "/" << den;
        } else {
            cout << "0";
        }
    }
}