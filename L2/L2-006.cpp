//
// Created by Kain Zhang on 2020/10/16.
//

#include <bits/stdc++.h>
using namespace std;
const int mxN = 105;
vector<int> post(mxN), in(mxN);
int G[mxN][2];

int buildTree(int postL, int postR, int inL, int inR) {
    if (postL > postR) return -1;
    int k = inL;
    while (k <= inR) {
        if (in[k] == post[postR]) break;
        k++;
    }
    int numleft = k - inL;
    G[post[postR]][0] = buildTree(postL, postL + numleft - 1, inL, k - 1);
    G[post[postR]][1] = buildTree(postL + numleft, postR - 1, k + 1, inR);
    return post[postR];
}

int flag = 0;
void printLevel(int r) {
    queue<int> que;
    que.push(r);
    while (!que.empty()) {
        r = que.front();
        que.pop();
        if (flag++) cout << " ";
        cout << r;
        if (G[r][0] != -1) que.push(G[r][0]);
        if (G[r][1] != -1) que.push(G[r][1]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    fill(G[0], G[0] + mxN * 2, -1);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> post[i];
    for (int i = 0; i < N; i++) cin >> in[i];
    int root = buildTree(0, N - 1, 0, N - 1);
    printLevel(root);
}