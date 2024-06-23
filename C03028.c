#include <stdio.h>
#include <math.h>
#define ll long long

pascal (int a, int b){
	if(a==0 || a==b) return 1;
	else return pascal(a-1,b-1)+pascal(a,b-1);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",pascal(j,i));
		}
		printf("\n");
	}
}

