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
		int dem = 0;
		for(int i=0;i<n;i++){
			int check =1;
			for(int j=0;j<i;j++){
				if(a[j]>a[i]){
					check = 0;
					break;
				}
			}
			if(check) ++dem;
		}
		printf("%d\n",dem);
	}
}
