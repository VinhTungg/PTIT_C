#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	long long sum = 0;
	if(a<b){
		for(int i=a;i<b+1;i++){
			sum += i;
		}
	}
	else{
		for(int i=b;i<=a;i++){
			sum += i;
		}
	}
	printf("%lld",sum);
}
