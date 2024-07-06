#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

void chuanhoa1(char c[]){
	foru(i,1,strlen(c)-1) c[i] = toupper(c[i]);
}

void chuanhoa(char c[]){
	c[0] = toupper(c[0]);
	foru(i,1,strlen(c)-1){
		c[i] = tolower(c[i]);
	}
}

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1005];
		gets(s);
		char a[20][50];
		int n = 0;
		char *tok = strtok(s," ");
		while(tok!=NULL){
			chuanhoa(tok);
			strcpy(a[n],tok);
			n++;
			tok = strtok(NULL," ");
		}
		chuanhoa1(a[0]);
		printf("%s",a[1]);
		foru(i,2,n-1){
			printf(" %s",a[i]);
		}
		printf(", %s\n",a[0]);
	}
}
    
