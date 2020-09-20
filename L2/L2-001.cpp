//
// Created by Kain Zhang on 2020/9/19.
//

#include <bits/stdc++.h>
using namespace std;
const int mxN = 505;

int N, M, S, D;
int G[mxN][mxN], weight[mxN], d[mxN], w[mxN], vis[mxN], num[mxN], pre[mxN];

void dijkstra(int s) {
    fill(d, d + mxN, INT_MAX);
    d[s] = 0;
    w[s] = weight[s];
    num[s] = 1;
    for (int i = 0; i < N; i++) {
        int u = -1, MIN = INT_MAX;
        for (int j = 0; j < N; j++) {
            if (!vis[j] && d[j] < MIN) {
                u = j;
                MIN = d[j];
            }
        }
        if (u == -1) return;
        vis[u] = 1;
        for (int v = 0; v < N; v++) {
            if (!vis[v] && G[u][v] != INT_MAX) {
                if (d[u] + G[u][v] < d[v]) {
                    d[v] = d[u] + G[u][v];
                    pre[v] = u;
                    num[v] = num[u];
                    w[v] = w[u] + weight[v];
                } else if (d[u] + G[u][v] == d[v]) {
                    num[v] += num[u];
                    if (w[u] + weight[v] > w[v]) {
                        w[v] = w[u] + weight[v];
                        pre[v] = u;
                    }
                }
            }
        }
    }
}

void printPath(int v) {
    if (v == S) {
        cout << S;
        return;
    }
    printPath(pre[v]);
    cout << " " << v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    fill(G[0], G[0] + mxN * mxN, INT_MAX);
    cin >> N >> M >> S >> D;
    for (int i = 0; i < N; i++) {
        cin >> weight[i];
    }
    for (int i = 0; i < M; i++) {
        int c1, c2, l;
        cin >> c1 >> c2 >> l;
        G[c1][c2] = G[c2][c1] = l;
    }
    dijkstra(S);
    cout << num[D] << " " << w[D] << endl;
    printPath(D);
}