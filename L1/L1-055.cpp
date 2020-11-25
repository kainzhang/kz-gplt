//
// Created by Kain Zhang on 2020/11/25.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int pa, pb, ca = 0, cb = 0;
    cin >> pa >> pb;
    for (int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) ca++;
        else cb++;
    }
    cout << "The winner is ";
    if ((ca > 0 && pa > pb) || ca == 3) {
        cout << "a: " << pa << " + " << ca;
    } else {
        cout << "b: " << pb << " + " << cb;
    }
}