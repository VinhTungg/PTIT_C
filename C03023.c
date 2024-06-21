#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int tn(ll n){
	ll tong = 0,a=n;
	while(n!=0){
		tong = tong*10 + n%10;
		if(n%10==9) return 0;
		n/=10;
	}
	if(tong==a) return 1;
	return 0;
}

int main(){
//    int t;
//    scanf("%d",&t);
//    while(t--){
		int n;
    	scanf("%d",&n);
    	int cnt = 0;
    	for(int i=2;i<=n;i++){
    		if(tn(i)){
    			printf("%d ",i);
    			++cnt;
			}
		}
		printf("\n%d",cnt);
//	}
}  
