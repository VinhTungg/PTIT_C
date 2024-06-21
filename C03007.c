#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int tn(int n){
	int rev =0, m=n;
	while(n!=0){
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev == m) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt = 0;
		for(int i=a;i<=b;i++){
			if(nt(i) && tn(i)){
				printf("%d ",i);
				++cnt;
				if(cnt%10==0) printf("\n");
			}
		}
		printf("\n");
	}
}

