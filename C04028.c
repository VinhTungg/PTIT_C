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
		for(int i=0;i<n;i++){
			int min = i-1,x=a[i];
			while(min>=0 && x<a[min]){
				a[min+1] = a[min];
				min--;
			}
			a[min+1] = x;
			printf("Buoc %d: ",i);
			for(int k=0;k<=i;k++){
				printf("%d ",a[k]);
			}
			printf("\n");
		}
//	}
}  
