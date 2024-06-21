#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#include<limits.h>

ll n,a[100];

int check(ll n){
	for(int i=0;i<=92;i++){
		if(a[i]==n) return 1;
	}
	return 0;
}

int main(){
	a[0] = 0,a[1] = 1;
	for(int i=2;i<=92;i++){
		a[i] = a[i-1] + a[i-2];
	} 
    int t;
    scanf("%d",&t);
    while(t--){
    	scanf("%lld",&n);
    	printf("%s\n",(check(n)?"YES":"NO"));
	}
}  
