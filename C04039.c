#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	long long x,y;
	while(scanf("%lld%lld",&x,&y)!=-1){
		ll dis = abs(y-x);
		ll res = 0;
		ll cnt = 0;
		while(res < dis){
			res += (cnt+1)/2;
			cnt++;
		}
		if(dis > 0) cnt--;
		printf("%lld\n",cnt);
	}
}
