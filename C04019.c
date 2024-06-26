#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
    	int n;
    	scanf("%d",&n);
    	int b[100006]={0};
    	int max = 0;
    	int a[n+5];
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
    		b[a[i]]++;
    		if(max<b[a[i]]) max = b[a[i]];
		}
		for(int i=0;i<n;i++){
			if(b[a[i]]==max){
				printf("%d ",a[i]);
				b[a[i]] = 0;
			}else b[a[i]] = 0;
		}
		printf("\n");
	}
}  
