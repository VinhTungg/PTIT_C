#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	ll f[100];
	f[0] = 0;f[1] = 1;f[2]=1;
	for(int i=3;i<93;i++){
		f[i] = f[i-1] + f[i-2];
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",f[n]);
	}
}
