#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	if(b==0){
		printf("0");
		return 0;
	}
	printf("%lld %d %lld %.2lf %d",a+b,a-b,a*b,1.0*a/b,a%b);
}
