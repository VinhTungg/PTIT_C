#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	foru(i,1,strlen(c)-1){
		c[i] = tolower(c[i]);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[1005];
		gets(s);
		char a[20][50];
		int n = 0;
		char *tok = strtok(s," ");
		while(tok!=NULL){
			strcpy(a[n],tok);
			n++;
			tok = strtok(NULL," ");
		}
		foru(i,0,n-1){
			chuanhoa(a[i]);
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}
    
