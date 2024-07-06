#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	foru(y,1,t){
	    char s[100006];
	    char a[50][50];
	    int n = 0;
	    gets(s);
	    char* tok = strtok(s," ");
	    while(tok != NULL){
	    	foru(i,0,strlen(tok)-1) tok[i]=tolower(tok[i]);
	    	strcpy(a[n],tok);
	    	++n;
	    	tok = strtok(NULL," ");
		}
		int b[105] = {0};
		foru(i,0,n-1){
			if(b[i]==0){
				int cnt = 1;
				foru(j,i+1,n-1){
					if(strcmp(a[i],a[j])==0){
						++cnt;
						b[j] = 1;
					}
				}
				printf("%s %d\n",a[i],cnt);
			}
		}
//		printf("\n");
//	}
}