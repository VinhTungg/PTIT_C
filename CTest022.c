#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[20];
        scanf("%s", s);
        int n = strlen(s);
        if(n & 1){
            printf("INVALID\n");
            continue;
        }
        ll num1 = 0, num2 = 0;
        for(int i = 0; i < n / 2; ++i) num1 = num1 * 10 + (s[i] - '0');
        for(int i = n / 2; i < n; ++i) num2 = num2 * 10 + (s[i] - '0');
        printf("%lld\n", lcm(num1, num2));
    }
}