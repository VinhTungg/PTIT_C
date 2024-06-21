#include<stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int tn(int n){
	int m=0, tmp=n, sum=0;
	while(n>0){
		m=m*10+n%10;
		sum+=n%10;
		n/=10;
	}
	if(tmp==m && sum%10==8) return 1; else return 0;
}
int check(int n){
	while(n>0){
		if(n%10!=6) n/=10;
		else {
			return 1;
		}
	}
    return 0;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b) swap(&a,&b);
	for(int i=a;i<=b;i++){
		if(tn(i) && check(i)) printf("%d ", i);
		
	}
}