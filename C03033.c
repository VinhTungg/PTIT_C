#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	printf("%d = ",n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt = 0;
			while(n%i==0){
				n/=i;
				++cnt;
			}
			if(n==1) printf("%d^%d",i,cnt);
			else printf("%d^%d * ",i,cnt);
		}
	}
	if(n!=1) printf("%d^1",n);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		nt(n);
		printf("\n");
	}
}

