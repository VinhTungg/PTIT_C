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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		int b[100006];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int cnt = 0;
		for(int i=0;i<n-1;i++){
			if(a[i] == a[i+1]){
				++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}
