#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int check(int a[],int n){
    int i;
    for(i=0;i<n-1;++i)
        if (a[i]>a[i+1]) return 0;
    return 1;
}

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
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			}
				printf("Buoc %d: ",i+1);
				for(int k=0;k<n;k++){
					printf("%d ",a[k]);
				}
				printf("\n");
				if(check(a,n)) break;
		}
//	}
}  
