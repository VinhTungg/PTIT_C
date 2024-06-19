#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int cnt = m+1;
		for(int j=i;j<=m+i-1;j++){
			cnt--;
			if(i==1){
				printf("%d",j);
			}
			else{
				if(j<=m || j==i) printf("%d",j);
				else printf("%d",cnt);
			}
		}
		printf("\n");
	}
}
