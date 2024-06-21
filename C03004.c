#include <stdio.h>
#include <math.h>

int gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld",gcd(a,b),a*b/gcd(a,b));
}

