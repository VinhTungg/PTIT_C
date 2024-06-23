#include <stdio.h>
#include <math.h>
#define ll long long

int check(int n){
	while(n>9){
		int r = n%10;
		if(r>=(n/10)%10) return 0;
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
		int cnt = 0;
		for(int i=a;i<=b;i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n",cnt);
	}
}

