#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i == 1 || i==m){
				printf("*");
			}else{
				if(j==1 || j==n) printf("*");
				else printf(" ");
			}
		}
		printf("\n\n");
	}
}
