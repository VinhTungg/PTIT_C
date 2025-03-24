#include<stdio.h>
#include<math.h>

int main(){
    int U0, d, N;
    scanf("%d%d%d", &U0, &d, &N);
    printf("%d", N * (2 * U0 + (N - 1) * d) / 2);
}