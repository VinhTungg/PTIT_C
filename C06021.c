#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

//int cmp(const void *a,const void *b){
//	char *x = (char*)a;
//	char *y = (char*)b;
//	return strcmp(x,y);
//}

char s[1005];

char *res(char *s){
	int c = 0,l = 0;
	int n = strlen(s);
	foru(i,0,strlen(s)-1)
		if (s[i]<'0'||s[i]>'9') return "INVALID";
        else if (s[i]&1) l++;
        else c++;
    if (n%2==1&&l>c) return "YES";
    if (n%2==0&&l<c) return "YES";
    return "NO";
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		scanf("%s",s);
		printf("%s\n",res(s));
	}
}
    
