#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int cmp(const void *a,const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x,y);
}

int main(){
//	int t;
//	scanf("%d\n",&t);
//	while(t--){
		char s[1005];
		gets(s);
		char c[1005];
		gets(c);
		char a[100][100],b[100][100];
		int n = 0;
		char tmp[105];
		char *tok = strtok(s," ");
		while(tok!=NULL){
			strcpy(a[n],tok);
			n++;
			tok = strtok(NULL," ");
		}
		int m = 0;
		tok = strtok(c," ");
		while(tok!=NULL){
			strcpy(b[m],tok);
			m++;
			tok = strtok(NULL," ");
		}
		qsort(a,n,sizeof(a[0]),cmp);
		foru(i,0,n-1){
			while(strcmp(a[i],a[i+1])==0) ++i;
			int cnt = 0;
			foru(j,0,m-1){
				if(strcmp(a[i],b[j])==0){
					cnt = 1;
					break;
				}
			}
			if(cnt==0) printf("%s ",a[i]);
		}
//	}
}
    
