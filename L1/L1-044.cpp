//
// Created by Kain Zhang on 2020/11/24.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int K, cnt = 1;
    cin >> K;
    K++;
    string cmd;
    while (cin >> cmd, cmd != "End") {
        string res;
        if (cnt && cnt % K == 0) {
            res = cmd;
        } else {
            if (cmd == "ChuiZi") res = "Bu";
            else if (cmd == "JianDao") res = "ChuiZi";
            else if (cmd == "Bu") res = "JianDao";
        }
        cout << res << endl;
        cnt++;
    }
}