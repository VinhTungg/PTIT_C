#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int cnt = i;
		for(int j=i;j<=m+i-1;j++){
			if(j<m) printf("%d",cnt++);
			else printf("%d",cnt--);
		}
		printf("\n");
	}
}
