#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
//    ll t;
//    scanf("%lld",&t);
//    while(t--){
    	int n;
    	scanf("%d",&n);
    	int a[n+5];
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int tmp = a[i];
					a[i]= a[j];
					a[j]= tmp;
				}
			}
			printf("Buoc %d: ",i+1);
			for(int k=0;k<n;k++){
				printf("%d ",a[k]);
			}
			printf("\n");
		}
//	}
}  
