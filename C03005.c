#include <stdio.h>
#include <math.h>

int gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	for(int i=a;i<=b;i++){
		for(int j=i+1;j<=b;j++){
			if(gcd(i,j)==1) printf("(%d,%d)\n",i,j);
		}
	}
}

