//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string A, B;
    getline(cin, A);
    getline(cin, B);
    for (char &c : B) {
        mp[c]++;
    }
    string res = "";
    for (char &c : A) {
        if (mp[c]) continue;
        res.push_back(c);
    }
    cout << res;
}