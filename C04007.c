#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+5],b[m+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		int p; scanf("%d",&p);
		for(int i=0;i<p;i++){
			printf("%d ",a[i]);
		}
		for(int i=0;i<m;i++){
			printf("%d ",b[i]);
		}
		for(int i=p;i<n;i++){
			printf("%d ",a[i]);
		}
//	}
}
