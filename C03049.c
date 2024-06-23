#include <stdio.h>
#include <math.h>
#define ll long long

int check(ll n){
	int c = 0, l = 0;
	while(n!=0){
		if(n%2==0) ++c;
		else ++l;
		n/=10;
	}
	if(l<=c) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}

