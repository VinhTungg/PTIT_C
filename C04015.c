#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	int d=t;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		int b[100006];
		int cnt = 0;
		int max = -1e9;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n",d-t);
		for(int i=0;i<n;i++){
			if(b[a[i]]>=1){
				printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}
