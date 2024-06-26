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
		int max1 = -1e9, max2;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(max1 <a[i]){
				max2 = max1;
				max1 = a[i];
			}else if(a[i]>max2 && a[i] != max1){
				max2 = a[i];
			}
		}
		printf("%d %d",max1,max2);
//	}
}
