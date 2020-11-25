//
// Created by Kain Zhang on 2020/11/25.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int R1, C1;
    cin >> R1 >> C1;
    vector<vector<int>> A(R1, vector<int>(C1));
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            cin >> A[i][j];
        }
    }
    int R2, C2;
    cin >> R2 >> C2;
    vector<vector<int>> B(R2, vector<int>(C2));
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            cin >> B[i][j];
        }
    }
    if (C1 != R2) {
        cout <<  "Error: " << C1 << " != " << R2 << endl;
        return 0;
    }
    cout << R1 << " " << C2 << endl;
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            int sum = 0;
            for (int k = 0; k < C1; k++) {
                sum += A[i][k] * B[k][j];
            }
            if (j) cout << " ";
            cout << sum;
        }
        cout << endl;
    }
}