//
// Created by Kain Zhang on 2020/11/24.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        unordered_map<int, int> time;
        unordered_map<int, char> sta;
        char cmd;
        int id, hh, mm, cnt = 0, sum = 0;
        while (scanf("%d %c %d:%d", &id, &cmd, &hh, &mm), id != 0) {
            if (cmd == 'S') {
                sta[id] = 'S';
                time[id] = hh * 60 + mm;
            } else if (cmd == 'E') {
                if (sta[id] == 'E') continue;
                else if (sta[id] == 'S') {
                    sta[id] = 'E';
                    sum += hh * 60 + mm - time[id];
                    cnt++;
                }
            }
        }
        if (!cnt) {
            cout << "0 0" << endl;
        } else {
            cout << cnt << " " << (int)round(sum * 1.0 / cnt) << endl;
        }
    }
}