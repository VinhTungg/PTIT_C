#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int cnt;
		for(int i=1;i<=n;i++){
			if(i%2!=0) cnt =-1;
			else cnt = 0;
			for(int j=1;j<=i;j++){
				printf("%d",cnt+=2);
			}
			printf("\n");
		}
//	}
}
