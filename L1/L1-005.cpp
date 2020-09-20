//
// Created by Kain Zhang on 2020/9/16.
//

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, string> test;
unordered_map<string, int> exam;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string id;
        int tt, ee;
        cin >> id >> tt >> ee;
        test[tt] = id;
        exam[id] = ee;
    }
    int M, x;
    cin >> M;
    while (M--) {
        cin >> x;
        cout << test[x] << " " << exam[test[x]] << endl;
    }
}