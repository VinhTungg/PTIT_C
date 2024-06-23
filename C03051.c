#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		if(a<2) a=2;
		int cnt=0;
		for(int i=a;i<=sqrt(b);i++){
			if(nt(i)) ++cnt;
		}
		printf("%d\n",cnt);
	}
}
