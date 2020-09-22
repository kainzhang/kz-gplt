//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int mns = 0, two = 0, evn = 1, len = str.size();
    for (char &c : str) {
        if (c == '-') {
            mns = 1;
            len--;
        } else if (c == '2') {
            two++;
        }
    }
    if ((str[len - 1] - '0') & 1) {
        evn = 0;
    }
    double pnt = two * 100.0 / len;
    if (mns) {
        pnt *= 1.5;
    }
    if (evn) {
        pnt *= 2;
    }
    printf("%.2f%%", pnt);
}