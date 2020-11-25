//
// Created by Kain Zhang on 2020/10/16.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int mxA, mxB, N, cntA = 0, cntB = 0;
    cin >> mxA >> mxB >> N;
    for (int i = 0; i < N; i++) {
        int hanA, huaA, hanB, huaB;
        cin >> hanA >> huaA >> hanB >> huaB;
        int flagA = 1, flagB = 1;
        if (huaA == hanA + hanB) flagA = 0;
        if (huaB == hanA + hanB) flagB = 0;
        if (flagA == flagB) continue;
        if (!flagA) {
            cntA++;
            if (cntA > mxA) {
                cout << "A" << endl << cntB << endl;
                return 0;
            }
        } else {
            cntB++;
            if (cntB > mxB) {
                cout << "B" << endl << cntA << endl;
                return 0;
            }
        }
    }
}