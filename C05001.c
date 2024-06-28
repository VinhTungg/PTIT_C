#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+5][m+5];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
//	}
}
