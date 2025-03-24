#include<stdio.h>
#include<math.h>

int isprime(int n){
    for(int i = 2; i * i <= n; ++i) if(n % i == 0) return 0;
    return n > 1;
}

int main(){
    int t = 1; 
    scanf("%d", &t);
    while(t--){
        int n; 
        scanf("%d", &n);
        int a[n], cnt[1001] = {};
        for(int i = 0; i < n; ++i){
            scanf("%d", &a[i]);
            ++cnt[a[i]];
        }
        for(int i = 0; i <= 1000; ++i){
            if(cnt[i]>= 1 && isprime(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}