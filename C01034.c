#include <stdio.h>
#include <math.h>
int cp(int m, int n){
	int cnt = 0;
		int a= sqrt(m);
	if(a*a== m) {
		++cnt;
	}
	for(int i=sqrt(m)+1;i<=sqrt(n);i++){
		++cnt;
	}
	return cnt;
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a= sqrt(m);
	int cnt = 0;
	printf("%d\n",cp(m,n));
	if(a*a== m) {
		printf("%d\n",m);
	}
	for(int i=sqrt(m)+1;i<=sqrt(n);i++){
		printf("%d\n",i*i);
	}
}
