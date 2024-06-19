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
		int cnt = max(n,m)-i+1,res = max(n,m)-i+1;
		for(int j=1;j<=m;j++){
			res--;
			if(res>=1) printf("%d",cnt--);
			else printf("%d",cnt++);
		}
		printf("\n");
	}
}
