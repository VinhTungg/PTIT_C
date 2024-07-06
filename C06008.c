#include <stdio.h>
#include <math.h>
#define ll long long
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
	char c[300];
	gets(c);
	char a[20][50];
	int n = 0;
	char *tok = strtok(c," ");
	while(tok != NULL){
		strcpy(a[n],tok);
		n++;
		tok = strtok(NULL, " ");
	}
	for(int i=0;i<n;i++){
		int ok = 1;
		for(int j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				ok = 0;
				break;
			}
		}
		if(ok) printf("%s ",a[i]);
	}
//	}
}
