#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c = a, d= b;
	int sum1=0,sum2=0;
	while(a!=0){
		sum1+=a%10;
		a/=10;
	}
	while(b!=0){
		sum2+=b%10;
		b/=10;
	}
	if(sum1<=sum2) printf("%d %d",c,d);
	else printf("%d %d",d,c);
}

