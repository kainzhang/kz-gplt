//
// Created by Kain Zhang on 2020/11/17.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int N;
    char ch;
    scanf("%d %c", &N, &ch);
    getchar();
    string line;
    getline(cin, line);
    int len = line.size();
    for (int i = len; i < N; i++) {
        cout << ch;
    }
    int tmp = len - N;
    if (tmp < 0) tmp = 0;
    for (int i = tmp; i < len; i++) {
        cout << line[i];
    }
}