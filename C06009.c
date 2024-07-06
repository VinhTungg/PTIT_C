#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int f(char x){
    return (x=='6'||x=='8');
}

int res(char *s){
    if (s[6]==s[7]&&s[7]==s[8]&&s[8]==s[10]&&s[10]==s[11]) return 1;
    if (s[6]<s[7]&&s[7]<s[8]&&s[8]<s[10]&&s[10]<s[11]) return 1;
    if (s[6]==s[7]&&s[7]==s[8]&&s[10]==s[11]) return 1;
    if (f(s[6])&&f(s[7])&&f(s[8])&&f(s[10])&&f(s[11])) return 1;
    return 0;
}


int main(){
	int t;
	scanf("%d\n",&t);
	foru(y,1,t){
		char s[20];
		gets(s);
		printf("%s\n",(res(s)?"YES":"NO"));
	}
}
    
