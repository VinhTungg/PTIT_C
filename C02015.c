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
		for(int i=1;i<=n;i++){
			int cnt = 1;
			for(int j=1;j<=2*i-1;j++){
				printf("%d",cnt++);
			}
			printf("\n");
		}
//	}
}
