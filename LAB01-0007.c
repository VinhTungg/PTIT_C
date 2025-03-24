#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    int n;
    scanf("%d", &n);
    double a[n + 1], res = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%lf", &a[i]);
        res += a[i];
    }
    printf("%.3lf", res / (1.0 * n));
}