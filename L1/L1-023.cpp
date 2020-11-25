//
// Created by Kain Zhang on 2020/10/31.
//

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    for (char &c : str) {
        if (isalpha(c)) {
            c = toupper(c);
            mp[c]++;
        }
    }
    while (mp['G'] || mp['P'] || mp['L'] || mp['T']) {
        if (mp['G']) {
            cout << 'G';
            mp['G']--;
        }
        if (mp['P']) {
            cout << 'P';
            mp['P']--;
        }
        if (mp['L']) {
            cout << 'L';
            mp['L']--;
        }
        if (mp['T']) {
            cout << 'T';
            mp['T']--;
        }
    }
}