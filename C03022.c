#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int nt(ll n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int tn(ll n){
	ll tong = 0;
	while(n!=0){
		tong += n%10;
		n/=10;
	}
	if(tong%10==0 || tong %10==5) return 1;
	return 0;
}

int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
		int n;
    	scanf("%d",&n);
    	int cnt = 0;
    	for(int i=5;i<=n;i++){
    		if(tn(i) && nt(i)){
    			printf("%d ",i);
    			++cnt;
			}
		}
		printf("\n%d",cnt);
//	}
}  
