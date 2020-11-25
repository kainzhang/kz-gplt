//
// Created by Kain Zhang on 2020/11/25.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    char ch;
    int N;
    cin >> ch >> N;
    getchar();
    vector<string> vec(N);
    for (int i = 0; i < N; i++) {
        getline(cin, vec[i]);
    }
    int flag = 1;
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] != vec[N - i - 1][j]) {
                flag = 0;
            }
        }
    }
    if (flag) {
        cout << "bu yong dao le" << endl;
    }
    for (int i = N - 1; i >= 0; i--) {
        for (auto it = vec[i].rbegin(); it != vec[i].rend(); it++) {
            if (*it == ' ') cout << ' ';
            else cout << ch;
        }
        cout << endl;
    }
}