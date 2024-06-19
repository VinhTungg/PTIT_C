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
	    ll sum = 0;
		foru(i,0,n-1){
			int x; scanf("%d",&x);
			int i=2;
			while(i*i<=x){
				while(x%i==0){
					sum += i;
					x/=i;
				}
				++i;
			}
			if(x>1) sum += x;
		}
		printf("%lld",sum);
//	}
}