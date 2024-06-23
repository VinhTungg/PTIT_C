#include <stdio.h>
#include <math.h>
#define ll long long

int nt(ll n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;	
}

int tach(ll n){
	int cnt[9] = {0};
	while(n!=0){
		if(nt(n%10)) cnt[n%10]++;
		n/=10;
	}
	for(int i=2;i<10;i++){
		if(nt(i) && cnt[i]>0) printf("%d %d\n",i,cnt[i]);
	}
}

int main(){
	ll n;
	scanf("%lld",&n);
	tach(n);
}

