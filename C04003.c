#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int cnt = 1;
		for(int i=0;i<n/2;i++){
			if(a[i]!=a[n-i-1]){
				cnt = 0;
			}
		}
		if(cnt) printf("YES\n");
		else printf("NO\n");
	}
}
