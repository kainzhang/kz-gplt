//
// Created by Kain Zhang on 2020/9/16.
//

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    int sqr = sqrt(x);
    if (x < 2) return false;
    for (int i = 2; i <= sqr; i++) {
        if (x % i == 0) return false;

    }
    return true;
}

int main() {
    int N;
    cin >> N;
    if (isPrime(N)) {
        cout << 1 << endl << N;
        return 0;
    }

    int sqr = sqrt(N);
    vector<int> que, tmp;
    for (int i = 2; i <= sqr; i++) {
        int M = N;
        for (int j = i; j <= N / 2; j++) {
            if (M % j == 0) {
                M /= j;
                tmp.push_back(j);
            } else {
                if (tmp.size() > que.size()) {
                    que = tmp;
                }
                tmp.clear();
            }
        }
        if (tmp.size() > que.size()) {
            que = tmp;
        }
    }
    int len = que.size();
    cout << len << endl;
    for (int i = 0; i < len; i++) {
        if (i) cout << "*";
        cout << que[i];
    }
}