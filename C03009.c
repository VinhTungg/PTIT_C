#include <stdio.h>
#include <math.h>
#define ll long long

void swap(ll *a,ll *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

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
	ll a,b;
	scanf("%lld%lld",&a,&b);
	if(a>b) swap(&a,&b);
	if(a==1) ++a;
	if(b==1) ++b;
	for(ll i=a;i<=b;i++){
		if(hh(i)) printf("%lld ",i);
	}
}

