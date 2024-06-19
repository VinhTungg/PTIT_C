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
	for(int i=0;i<n;i++){
		int cnt = max(n,m),res = -1;
		for(int j=1;j<=m;j++){
			if(res<i){
				res++;
				printf("%c",96+cnt-res);
			}
			else printf("%c",96+cnt-res);
		}
		printf("\n");
	}
}

//5 5 5 5 5
//5 4 4 4 4
//5 4 3 3 3
//5 4 3 2 2

//5 4 3 2 1
