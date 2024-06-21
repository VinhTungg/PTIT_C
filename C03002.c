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

int kt(int a){
	for(int i=2;i<=a;i++){
		if(nt(i)) printf ("%d\n",i);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	kt(n);
}

