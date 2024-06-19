#include <stdio.h>
#include <math.h>

int max(int a,int b){
	if(a>b) return a;
	else return b;
}

int min(int a,int b){
	if(a<b) return a;
	else return b;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int cnt = i;
		if(cnt>m) cnt = m;
		for(int j=1;j<=m;j++){
			if(cnt>m) printf("%c",64+(cnt-j));
			else printf("%c",64+cnt++);
		}
		printf("\n");
	}
}


