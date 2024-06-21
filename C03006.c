#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt = 0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			printf("%d(%d) ",i,cnt);
		}
	}
	if(n!=1)printf("%d(1)",n);
}

int main(){
	int t;
	scanf("%d",&t);
	int a = t;
	while(t--){
		printf("Test %d: ",a-t);
		int n;
		scanf("%d",&n);
		nt(n);
		printf("\n");
	}
}

