#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int a,b;
	a = n%10;
	while(n>9){
		n/=10;
	}
	b = n%10;
	printf("%d %d",b,a);
}
