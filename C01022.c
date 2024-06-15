#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long t;
		scanf("%lld",&t);
		long long sum = 0;
		while(t!=0){
			sum += t%10;
			t/=10;
		}
		printf("%lld\n",sum);
	}
}
