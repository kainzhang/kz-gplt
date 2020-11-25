//
// Created by Kain Zhang on 2020/11/25.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int cnt = 0, len = str.size();
    for (int j = 0; j <= len; j++) {
        if (str[j] == '6') {
            cnt++;
        } else {
            if (cnt > 3 && cnt <= 9) {
                cout << "9";
            } else if (cnt > 9) {
                cout << "27";
            } else {
                for (int i = 0; i < cnt; i++) {
                    cout << "6";
                }
            }
            cnt = 0;
            cout << str[j];
        }
    }
}