#include <stdio.h>
#include <math.h>
#define ll long long

int sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]= a[j];
				a[j] = tmp;
			}
		}
	}
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
			
		}
		sort(a,n);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
//	}
}
