#include <stdio.h>
#include <math.h>
#define ll long long

int check(int n){
	int r= 0, a=n;
	ll sum = 0;
	while(n!=0){
		if(n%10==4) return 0;
		r = r*10 + n%10;
		sum += n%10;
		n/=10;
	}
	if(r!=a) return 0;
	if(sum %10 !=0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int l = pow(10,n-1),r=pow(10,n)/2+1;
		while(l<=pow(10,n)/2){
			if(check(l)) printf("%d ",l);
			++l;
		}
		while(r<pow(10,n)){
			if(check(r)) printf("%d ",r);
			++r;
		}
		printf("\n");
	}
}

