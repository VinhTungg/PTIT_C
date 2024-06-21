#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int cnt = n-i+1;
		for(int j=i;j<=n;j++){
			printf("%c",63+cnt++);
		}
		printf("\n");
	}
}


