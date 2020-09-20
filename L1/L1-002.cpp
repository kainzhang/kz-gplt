//
// Created by Kain Zhang on 2020/9/16.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    char c;
    cin >> N >> c;
    int tmp = -1, row = 0, sum;
    while (1) {
        sum = tmp;
        tmp += (row * 2 + 1) * 2;
        if (tmp > N) break;
        row++;
    }
    for (int i = 0; i < row; i++) {
        string blk(i, ' ');
        string ctt((row - i) * 2 - 1, c);
        cout << blk << ctt << endl;
    }
    for (int i = row - 2; i >= 0; i--) {
        string blk(i, ' ');
        string ctt((row - i) * 2 - 1, c);
        cout << blk << ctt << endl;
    }
    cout << N - sum;
}