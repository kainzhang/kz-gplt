//
// Created by Kain Zhang on 2020/11/25.
//

#include "bits/stdc++.h"
using namespace std;

void dfs(int L, int M) {
    if (L > 1) dfs(L - 1, M / 26);
    cout << (char)('z' - M % 26);
}

int main(){
    int L, M;
    cin >> L >> M;
    dfs(L, M - 1);
}