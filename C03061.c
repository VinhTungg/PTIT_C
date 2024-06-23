#include <stdio.h>
#include <math.h>
#define ll long long


int check(ll n){
	ll a=n,res = 0,cnt=0;
	while(n>9){
		res = res * 10 + n%10;
		n/=10;
		++cnt;
	}
	if(res!=a-n*pow(10,cnt)) return 0;
	return n;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		int c = n%10;
		if(!check(n/10)) printf("NO\n");
		else{
			int d = check(n/10);
			if(c==2*d || d==2*c) printf("YES\n");
			else printf("NO\n");
		}
	}
}
