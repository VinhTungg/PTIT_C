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
		int cnt = 0;
		for(int i=1;i<=n;i++){
			if(i%2!=0) cnt = cnt + i;
			else cnt = cnt +i-1;
			for(int j=1;j<=i;j++){
				if(i%2!=0){
					printf("%d ",cnt++);
				}else{
					printf("%d ",cnt--);
				}
			}
			printf("\n");
		}
//	}
}
