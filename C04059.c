#include <stdio.h>
#include <math.h>
#define ll long long
#pragma GCC optimize("Ofast")

int t = 1, a, b;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        ll F[95] = {0, 1};
        for (int i = 2; i <= b; ++i)
            F[i] = F[i - 1] + F[i - 2];
        for (int i = a; i <= b; ++i)    
            printf("%lld ", F[i]);
        printf("\n");
    }
}