//
// Created by Kain Zhang on 2020/9/16.
//

#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

int main() {
    string num;
    cin >> num;
    for (char &c : num) {
        mp[c]++;
    }
    for (auto &i : mp) {
        cout << i.first << ":" << i.second << endl;
    }
}