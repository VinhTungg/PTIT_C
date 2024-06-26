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
		for(int i=0;i<n-1;i++){
			int cnt = 1;
			for(int j=i+1;j<n;j++){
				if(a[i]<=a[j]) cnt = 0;
			}
			if(cnt) printf ("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
}
