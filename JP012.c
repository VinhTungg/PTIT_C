#include<stdio.h>
#include<math.h>
#define ll long long
ll Fibo[93] = {0, 1};

void pre(){
    for(int i = 2; i <= 92; ++i) Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
}

int main(){
    pre();
    int t; scanf("%d", &t);
    while(t--){
        int a, b; scanf("%d%d", &a, &b);
        for(int i = a; i <= b; ++i){
            printf("%lld ", Fibo[i]);
        }
        printf("\n");
    }
}