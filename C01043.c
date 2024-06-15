#include <stdio.h>
#include <math.h>

int gt(int n){
	int res = 1;
	for(int i=2;i<=n;i++){
		res*=i;
	}
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	int a = n;
	while(n!=0){
		a-=gt(n%10);
		n/=10;
	}
	if(a == 0) printf("1");
	else printf("0");
}
