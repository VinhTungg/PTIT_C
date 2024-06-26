#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	int d=t;
	while(t--){
		int n,m,p;
		scanf("%d%d%d",&n,&m,&p);
		int a[n+5],b[m+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		printf("Test %d:\n",d-t);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
			if(i==p-1){
				for(int j=0;j<m;j++){
					printf("%d ",b[j]);
				}
			}
		}
		printf("\n");
	}
}
