#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

char *res(char *s){
    if (s[0]=='0') return "INVALID";
    int n=strlen(s);
    int a[10]={0};
    foru(i,0,n-1)
        if (s[i]<'0'||s[i]>'9') return "INVALID";
        else a[s[i]-'0']++;
    foru(i,0,9)
        if (!a[i]) return "NO";
    return "YES";
}


int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[1005];
		scanf("%s",s);
		printf("%s\n",res(s));
	}
}
    
