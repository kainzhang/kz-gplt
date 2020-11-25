//
// Created by Kain Zhang on 2020/11/16.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int, string> > vec;
    int sex;
    string name;
    for (int i = 0; i < N; i++) {
        cin >> sex >> name;
        vec.push_back(make_pair(sex, name));
    }
    vector<int> vis(N);
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            if (vis[j]) continue;
            if (vec[i].first != vec[j].first) {
                cout << vec[i].second << " " << vec[j].second << endl;
                vis[i] = vis[j] = 1;
                break;
            }
        }
    }
}