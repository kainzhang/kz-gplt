//
// Created by Kain Zhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << a[0] << "->" << a[1] << "->" << a[2];
}