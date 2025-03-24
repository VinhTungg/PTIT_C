#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

int rev(ll a){
    char num[20], tmp[20];
    sprintf(num, "%lld", a);
    sprintf(tmp, "%lld", a);
    int l = 0, r = strlen(num) - 1;
    while(l < r){
        char tmp = num[l];
        num[l] = num[r];
        num[r] = tmp;
        ++l; --r;
    }
    return strcmp(num, tmp) == 0;
}

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf((rev(a) && !rev(b)) || (!rev(a) && rev(b)) ? "YES" : "NO");
}