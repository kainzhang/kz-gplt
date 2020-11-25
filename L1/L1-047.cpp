//
// Created by Kain Zhang on 2020/11/24.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string name;
        int bre, pul;
        cin >> name >> bre >> pul;
        if (bre < 15 || bre > 20 || pul < 50 || pul > 70) {
            cout << name << endl;
        }
    }
}