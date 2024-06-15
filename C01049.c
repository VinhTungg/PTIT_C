#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int cnt1 = 0,cnt2 = 0;
		while(n!=0){
			if((n%10)%2==0){
				cnt2++;
			}else{
				cnt1++;
			}
			n/=10;
		}
		printf("%d %d",cnt1,cnt2);
		printf("\n");
	}
}
