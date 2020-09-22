//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char M[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main() {
    int N, flag = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        int Z = 0, ok = 1;
        for (int j = 0; j < 17; j++) {
            if (!isdigit(str[j])) {
                cout << str << endl;
                flag = 1;
                ok = 0;
                break;
            }
            Z += (str[j] - '0') * w[j];
        }
        if (!ok) continue;
        Z %= 11;
        if (M[Z] != str[17]) {
            cout << str << endl;
            flag = 1;
        }
    }
    if (!flag) {
        cout << "All passed";
    }
}