#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    ll min1 = 1e9,min2 = 1e9;
		foru(i,0,n-1){
			ll a,b;
			scanf("%lld%lld",&a,&b);
			if(min1>a) min1 = a;
			if(min2>b) min2 = b;
		}
		printf("%lld",min1*min2);
//	}
}