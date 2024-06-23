#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int kt(int n){
	while(n!=0){
		if(n%10<=1) return 0;
		if(!nt(n%10)) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(nt(i) && kt(i)){
				++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}

