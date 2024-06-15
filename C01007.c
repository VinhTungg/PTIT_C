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
	printf("%lld\n%d\n%lld\n%d\n%d\n%.2lf\n",a+b,a-b,1ll*a*b,a/b,a%b,1.0*a/b);
}
