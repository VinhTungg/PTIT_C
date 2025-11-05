#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

int t = 1, n;

int isprime(int n){
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return n > 1;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[1001] = {};
        int x;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            if (isprime(x))
               ++a[x];
        }
        for (int i = 2; i <= 1000; ++i)
            if (a[i])
                printf("%d ", i);
        printf("\n");
    }
}