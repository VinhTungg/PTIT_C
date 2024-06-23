#include <stdio.h>
#include <math.h>
#define ll long long

int tn(ll n){
	ll tmp=0, a= n;
	while(n!=0){
		tmp = tmp*10+n%10;
		n/=10;
	}
	if(tmp==a) return 1;
	return 0;
}

int kt(ll n){
	ll sum = 0;
	while(n!=0){
		if((n%10)%2==0) return 0;
		sum += n%10;
		n/=10;
	}
	if(sum%2!=0)return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if(tn(n) && kt(n)) printf("YES\n");
		else printf("NO\n");
	}
}

