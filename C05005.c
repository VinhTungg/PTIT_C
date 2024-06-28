#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	int d = t;
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+5][m+5];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",d-t);
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
