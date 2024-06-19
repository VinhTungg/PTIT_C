#include <stdio.h>
#include <math.h>

int min(int a, int b){
	if(a<b) return a;
	else return b;
}

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",min(a,min(b,c)));
}
