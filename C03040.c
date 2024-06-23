#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int tach(int n){
	int sum = 0;
	while(n!=0){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		if(n<2){
			printf("NO");
			return 0;
		}
		int a = n;
		int sum1=0,sum2=0;
		for(int i=2;i<sqrt(n);i++){
			if(nt(i) && n%i==0){
				while(n%i==0){
					sum1 += tach(i);
					n/=i;
				}
			}
		}
		if(n!=1){
			sum1 += tach(n);
		}
		sum2 += tach(a);
		if(sum1 == sum2) printf("YES");
		else printf("NO");
//	}
}
