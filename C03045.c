#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
		ll n;
    	ll a;
        scanf("%lld",&n);
        for(ll i=2;i*i<=n;++i)
            if (n%i==0){
                while(n%i==0) n/=i;
                a=i;
            }
        if (n>1) a=n;
        printf("%lld\n",a);
	}
}  
