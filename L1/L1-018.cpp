//
// Created by Kain Zhang on 2020/10/16.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int hh, mm;
    scanf("%d:%d", &hh, &mm);
    if (hh <= 12) {
        printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
        return 0;
    }
    int num = hh - 12;
    if (mm) num++;
    for (int i = 0; i < num; i++) {
        printf("Dang");
    }
}