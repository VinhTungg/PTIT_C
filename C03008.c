#include <stdio.h>
#include <math.h>
#define ll long long

int hh(ll n){
	ll sum = 0;
	ll a = n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum = sum + i + n/i;
		}
	}
	if(sum+1==a) return 1;
	else return 0;
}

int main(){
	ll n;
	scanf("%lld",&n);
	for(ll i=6;i<n;i++){
		if(hh(i)) printf("%lld ",i);
	}
}

