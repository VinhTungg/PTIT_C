#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#define ll long long

int cnt[9] = {0};

void pt(ll n){
	while(n!=0){
		int d = n%10;
		if(d == 3 || d == 5 || d == 7 || d==2){
			cnt[d]++;
		}
		n/=10;
	}
}
int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		ll n;
		scanf("%lld",&n);
		pt(n);
		for(int i=2;i<=7;i++){
			if(cnt[i]>0){
				printf("%d %d\n",i,cnt[i]);
			}
		}
//	}
}
