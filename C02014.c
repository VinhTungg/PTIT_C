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
		for(int i=1;i<=2*n-1;i++){
			for(int j=1;j<=2*n-1;j++){
				int dis = min(min(i-1,2*n-1-i),min(j-1,2*n-1-j));
				printf("%d",n-dis);
			}
			printf("\n");
		}
//	}
}
