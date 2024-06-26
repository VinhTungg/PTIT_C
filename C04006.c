#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=n-1;i>=0;i--){
			printf("%d ",a[i]);
		}
//	}
}
