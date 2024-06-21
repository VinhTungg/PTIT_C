#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int cnt = n-i+1;
		if(cnt>m) cnt = m;
		for(int j=1;j<=m;j++){
			if(cnt==m) printf("%c",64+cnt);
			else printf("%c",64+cnt++);
		}
		printf("\n");
	}
}


