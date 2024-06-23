#include <stdio.h>
#include <math.h>
#define ll long long

int check(ll n){
	int x = n%10;
	n/=10;
	while(n!=0){
		if(x<n%10) return 0;
		x=n%10;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		int a = pow(10,n-1), b= pow(10,n);
		for(int i=a;i<b;i++){
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}
}
