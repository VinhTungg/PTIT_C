#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a,ll b){
	return a*b/gcd(a,b);
}

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
    	int n;
    	scanf("%d",&n);
    	ll ans = 1;
    	for(int i=2;i<=n;i++){
    		ans = lcm(ans,i);
		}
		printf("%lld\n",ans);
	}
}  
