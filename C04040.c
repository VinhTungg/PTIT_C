#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll t;
    scanf("%lld",&t);
    for(int y=1;y<=t;y++){
    	int n;
    	scanf("%d",&n);
    	int a[n+5];
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		ll sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			sum1 += a[i];
			if(sum1>sum2) sum2 = sum1;
			if(sum1<0) sum1 = 0;
		}
		printf("%lld\n",sum2);	
	}
}  

