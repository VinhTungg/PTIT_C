#include <stdio.h>
#include <math.h>
#define ll long long
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int kt(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(!nt(c[i]-'0')) return 0;
	}
	return 1;
}

int tn(char c[]){
	for(int i=0;i<strlen(c)/2;i++){
		if((c[i]-'0')!=(c[strlen(c)-i-1]-'0')) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	char s[505];
	scanf("%s",s);
	if(kt(s) && tn(s)) printf("YES\n");
	else printf("NO\n");
	}
}
