//
// Created by Kain Zhang on 2020/11/18.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string name;
    vector<string> list;
    while(1) {
        cin >> name;
        if (name == ".") break;
        list.push_back(name);
    }
    if (list.size() < 2) {
        cout << "Momo... No one is for you ...";
    } else if (list.size() < 14) {
        cout << list[1] << " is the only one for you...";
    } else {
        cout << list[1] << " and " << list[13] << " are inviting you to dinner...";
    }
}