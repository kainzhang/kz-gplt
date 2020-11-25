//
// Created by Kain Zhang on 2020/11/18.
//

#include "bits/stdc++.h"
using namespace std;
const int mxN = 1e4;

vector<char> vec[mxN];

int main() {
    int N;
    cin >> N;
    getchar();
    string str;
    getline(cin, str);
    int len = str.size(), cols = ceil(len * 1.0 / N);
    for (int i = 0; i < len; i++) {
        vec[i % N].push_back(str[i]);
    }
    for (int i = len; i < cols * N; i++) {
        vec[i % N].push_back(' ');
    }
    for (int i = 0; i < N; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << vec[i][j];
        }
        cout << endl;
    }
}