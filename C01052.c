#include <stdio.h>
#include <math.h>

int cp(int n){
	int a = sqrt(n);
	if(a*a==n && n%2==0) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		int cnt = 0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0) ++cnt;
				if((n/i)%2==0) ++cnt;
			}
		}
		if(cp(n)) printf("%d\n",cnt-1);
		else printf("%d\n",cnt);
	}
}
