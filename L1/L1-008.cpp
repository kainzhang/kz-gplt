//
// Created by Kain Zhang on 2020/9/17.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, cnt = 0, sum = 0;
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        printf("%5d", i);
        sum += i;
        cnt++;
        if (cnt % 5 == 0 || i == B) {
            printf("\n");
        }
    }
    printf("Sum = %d", sum);
}