#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    ll sum = 0, tmp = 1;
    for(int i = 1; i <= n; ++i){
        tmp *= i;
        sum += tmp;
    }
    printf("%lld", sum);
}