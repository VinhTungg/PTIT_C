#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=1;j<=m+i;j++){
			if(i==0 || i==n-1){
				if(j<=i) printf("~");
				else printf("*");
			}else{
				if(j<=i) printf("~");
				else if(j==i+1 || j==m+i) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
}
