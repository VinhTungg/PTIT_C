#include <stdio.h>
#include <math.h>
#define ll long long

int gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld",a*b/gcd(a,b),gcd(a,b));
		printf("\n");
	}
}

