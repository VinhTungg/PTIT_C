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

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	foru(y,1,t){
		char s[1005],c[1005],a[100][100],b[1005];
		gets(s);
		gets(c);
		int n = 0;
		printf("Test %d: ",y);
		char *tok = strtok(s," ");
		while(tok!=NULL){
			strcpy(a[n],tok);
			n++;
			tok = strtok(NULL," ");
		}
		foru(i,0,strlen(c)-1) c[i] = tolower(c[i]);
		foru(i,0,n-1){
			strcpy(b,a[i]);
			foru(j,0,strlen(b)-1) b[j] = tolower(b[j]);
			if(strcmp(b,c)!=0) printf("%s ",a[i]);
		}
        printf("\n");
	}
}
    

