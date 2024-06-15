#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long t;
		scanf("%lld",&t);
		int a,b;
		a = t%10;
		while(t>9){
			t/=10;
		}
		b = t%10;
		if(a==b)printf("YES\n");
		else printf("NO\n");
	}
}
