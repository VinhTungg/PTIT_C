#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    ll a[n + 5][m + 5], b[m + 5][p + 5], c[n + 5][p + 5];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            scanf("%lld", &b[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}