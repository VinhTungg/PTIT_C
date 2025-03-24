#include<stdio.h>
#include<math.h>
#define ll long long
int isprime[1000001] = {};
int cnt;

void sieve(){
    for(int i = 2; i <= 1e6; ++i) isprime[i] = 1;
    for(int i = 2; i <= 1e3; ++i){
        if(isprime[i]){
            for(int j = i * i; j <= 1e6; j += i) isprime[j] = 0;
        }
    }
}

ll rotate(ll n){
    int st;
    st = n % 10;
    n /= 10;
    n += st * (ll)pow(10, cnt - 1);
    return n;
}

ll solve(ll n){
    sieve();
    ll tmp = n;
    while(n){
        if(!isprime[n]) return 0;
        n = rotate(n);
        if(n == tmp) break;
    }
    return 1;
}

int main(){
    int t; scanf("%d", &t);
    ll a[t + 5];
    for(int i = 0; i < t; ++i) scanf("%lld", &a[i]);
    for(int i = 0; i < t; ++i){
        ll m = a[i];
        cnt = 0;
        while(m){
            m /= 10;
            ++cnt;
        }
        printf("%d ", solve(a[i]));
    }
}