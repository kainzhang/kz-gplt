//
// Created by Kain Zhang on 2020/11/16.
//

#include "bits/stdc++.h"
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    int sqr = sqrt(x);
    for (int i = 2; i <= sqr; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        int num;
        cin >> num;
        if (isPrime(num)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}