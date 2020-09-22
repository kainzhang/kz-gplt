//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    char C;
    cin >> N >> C;
    int n = round(N * 0.5);
    string line(N, C);
    for (int i = 0; i < n; i++) {
        cout << line << endl;
    }
}