#include <stdio.h>
#include <math.h>

int cp(long long n){
	int a = sqrt(n);
	if(a*a==n) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(cp(n)) printf("YES\n");
		else printf ("NO\n");
	}
}
