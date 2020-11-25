//
// Created by Kain Zhang on 2020/11/24.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        char sx;
        double h;
        cin >> sx >> h;
        if (sx == 'M') {
            printf("%.2f\n", h / 1.09);
        } else {
            printf("%.2f\n", h * 1.09);
        }
    }
}