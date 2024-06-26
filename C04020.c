#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		int b[100006];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int p; scanf("%d",&p);
		for(int i=p;i<n;i++){
			printf("%d ",a[i]);
		}
		for(int i=0;i<p;i++){
			printf("%d ",a[i]);
		}
//	}
}
