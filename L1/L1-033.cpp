//
// Created by Kain Zhang on 2020/11/17.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    int y, n;
    cin >> y >> n;
    for (int i = y; ; i++) {
        set<int> st;
        int t = i;
        if (t <= 999) st.insert(0);
        while (t) {
            st.insert(t % 10);
            t /= 10;
        }
        if (st.size() == n) {
            printf("%d %04d", i - y, i);
            return 0;
        }
    }
}