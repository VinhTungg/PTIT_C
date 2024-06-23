#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	ll cnt = 0;
	for(int i=2;i<=n;i++){
		int tmp = i;
		while(tmp%2==0){
			++cnt;
			tmp/=2;
		}
	}
	if(cnt<k) printf("No");
	else printf("Yes");
}
