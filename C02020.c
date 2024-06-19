#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#define ll long long

int min(int a,int b){
	if(a<b) return a;
	return b;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int cnt;
		for(int i=1;i<=n;i++){
			cnt =0;
			for(int j=1;j<=n+i-1;j++){
				if(j<=n-i) printf("~");
				else if(j<=n && j>n-i) printf("%d",cnt+=2);
				else printf("%d",cnt-=2);
			}
			printf("\n");
		}
//	}
}
