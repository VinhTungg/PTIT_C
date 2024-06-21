#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n;i+=2){
		int cnt = i;
		for(int j=i;j<=2*n;j+=2){
			printf("%c",64+cnt);
			cnt+=2;
		}
		printf("\n");
	}
}


