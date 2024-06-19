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
			cnt = n-1;
			int d = i;
			for(int j=1;j<=i;j++){
				if(j==1) printf("%d ",d);
				else{
					d = d + cnt--;
					printf("%d ",d);
				}
			}
			printf("\n");
		}
//	}
}