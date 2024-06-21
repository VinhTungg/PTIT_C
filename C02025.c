#include <stdio.h>
#include <math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int cnt = i;
		if(cnt>m) cnt = m;
		for(int j=1;j<=m;j++){
			if(cnt==m) printf("%c",63+cnt);
			else printf("%c",63+cnt++);
		}
		printf("\n");
	}
}