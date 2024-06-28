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
		int b[100006];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		int cnt = 0;
		for(int i=0;i<n;i++){
			if(b[a[i]]>1){
				++cnt;
			}
			b[a[i]] = 0;
		}
		printf("%d\n",cnt);
		for(int i=0;i<n;i++){
			b[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(b[a[i]]>1) printf("%d ",a[i]);
			b[a[i]] = 1;
		}
//	}
}
