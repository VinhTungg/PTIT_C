#include <stdio.h>
#include <math.h>
#define ll long long

int fibo(int n){
	int sum = 0;
	while(n!=0){
		sum += n%10;
		n/=10;
	}
	int f[100006];
	f[0] = 0, f[1] = 1; f[2] = 1;
	for(int i=3;i<=sum+1;i++){
		f[i] = f[i-1] + f[i-2];
		if(sum==f[i]){
			return 1;
		}
	}
	return 0;
}

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b) swap(&a,&b);
	for(int i=a;i<=b;i++){
		if(nt(i) && fibo(i)) printf("%d ",i);
	}
}

