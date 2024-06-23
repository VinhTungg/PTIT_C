#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		while(n!=0 && n%2==0){
			n/=10;
		}
		if(n==0) printf("YES\n");
		else printf("NO\n");
	}
}

