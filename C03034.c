#include <stdio.h>
#include <math.h>
#define ll long long

int cp(ll n){
	ll a= sqrt(n);
	if(a*a==n) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		int cnt=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0) ++cnt;
				if((n/i)%2==0) ++cnt;
			}
		}
		if(cp(n) && n%2==0) printf("%d\n",cnt-1);
		else printf("%d\n",cnt);
	}
}

