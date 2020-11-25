//
// Created by Kain Zhang on 2020/11/16.
//

#include "bits/stdc++.h"
using namespace std;

int main() {
    string str;
    cin >> str;
    set<char, greater<char> > st;
    for (char &c : str) {
        st.insert(c);
    }
    vector<char> vec{st.begin(), st.end()};
    unordered_map<char, int> mp;
    int len = vec.size();
    for (int i = 0; i < len; i++) {
        mp[vec[i]] = i;
    }
    cout << "int[] arr = new int[]{";
    for (int i = 0; i < len; i++) {
        if (i) cout << ",";
        cout << vec[i];
    }
    cout << "};\nint[] index = new int[]{";
    len = str.size();
    for (int i = 0; i < len; i++) {
        if (i) cout << ",";
        cout << mp[str[i]];
    }
    cout << "};";
}