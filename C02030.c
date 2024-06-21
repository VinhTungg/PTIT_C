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
		int cnt ;
		for(int i=1;i<=n;i++){
			cnt = 0;
			for(int j=1;j<=2*i-1;j++){
				if(j<i) {
				printf("%c",'@'+(cnt));
				cnt+=2;
			}
				else{
				printf("%c",'@'+(cnt));
				cnt-=2;
			}
			}
			printf("\n");
		}
//	}
}
