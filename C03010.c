#include <stdio.h>
#include <math.h>
#define ll long long

//void swap(ll *a,ll *b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

int gt(int n){
	ll tich = 1;
	for(int i=1;i<=n;i++){
		tich *= i;
	}
	return tich;
}

int st(int n){
	ll sum = 0;
	int a = n;
	while(n!=0){
		sum += gt(n%10);
		n/=10;
	}
	if(sum == a) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(st(i)) printf("%d ",i);
	}
}

