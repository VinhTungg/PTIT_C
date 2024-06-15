#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for(int i = 2;i<n;i++){
		if(n%i==0) cnt += i;
	}
	if(n==cnt+1) printf("1");
	else printf("0");
}
