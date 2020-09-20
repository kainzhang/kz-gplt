//
// Created by Kain Zhang on 2020/9/17.
//

#include <bits/stdc++.h>
using namespace std;

string ch[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main() {
    string str;
    cin >> str;
    int flag = 0;
    for (char &c : str) {
        if (flag++) cout << " ";
        if (c == '-') cout << "fu";
        else cout << ch[c - '0'];
    }
}