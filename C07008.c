// Created by Vĩnh Tùng siêu cấp đẹp trai on 4/1/2025.
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    scanf("\n");
    while(t--) {
        char str1[10005], str2[10005];
        gets(str1);
        gets(str2);
        int len = strlen(str1);
        int a[100006] = {};
        int mu, tmp, maxNum = 0, minNum = 1e9;
        for (int i = 0; i < len; i++) {
            tmp = 0;
            mu = 0;
            if (isdigit(str1[i])) {
                int j = i;
                if (i > 0 && str1[i - 1] == '^') {
                    mu = 0;
                    while (isdigit(str1[j])) {
                        mu = mu * 10 + (str1[j] - '0');
                        ++j;
                    }
                }else {
                    tmp = 0;
                    while (isdigit(str1[j])) {
                        tmp = tmp * 10 + (str1[j] - '0');
                        ++j;
                    }
                }
                i = j;
                if (tmp && mu) {
                    printf("%d %d\n", tmp, mu);
                    a[mu] += tmp;
                    maxNum = fmax(maxNum, mu);
                    minNum = fmin(minNum, mu);
                }
            }
        for (int i = 0; i < len; i++) {
            tmp = 0;
            mu = 0;
            if (isdigit(str2[i])) {
                int j = i;
                if (i > 0 && str2[i - 1] == '^') {
                    int j = i;
                    if (i > 0 && str2[i - 1] == '^') {
                        mu = 0;
                        while (isdigit(str2[j])) {
                            mu = mu * 10 + (str2[j] - '0');
                            ++j;
                        }
                    }else {
                        tmp = 0;
                        while (isdigit(str2[j])) {
                            tmp = tmp * 10 + (str2[j] - '0');
                            ++j;
                        }
                    }
                    i = j;
                    if (tmp && mu) {
                        a[mu] += tmp;
                        maxNum = fmax(maxNum, mu);
                        minNum = fmin(minNum, mu);
                    }
                }
            }
            for (int i = maxNum; i >= minNum; i--) {
                if (a[i]) {
                    if (i != minNum) printf("%d*x^%d + ", a[i], i);
                    else printf("%d*x^%d\n", a[i], i);
                }
            }
        }
    }
    }
}