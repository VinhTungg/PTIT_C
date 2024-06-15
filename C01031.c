#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				if(n/i==1) printf("%d",i);
				else printf("%dx",i);
				n/=i;
			}
		}
	}
	if(n!=1) printf("%d",n);
}
int main(){
	int n;
	scanf("%d",&n);
	nt(n);
}
