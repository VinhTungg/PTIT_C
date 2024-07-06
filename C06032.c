#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char a[20], char b[20]) {
	char tmp1[30], tmp2[30];
	strcpy(tmp1, a);
	strcat(tmp1, b);
	strcpy(tmp2, b);
	strcat(tmp2, a);
	if(strcmp(tmp1, tmp2)>=0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		getchar();
		char a[20][20];
		for(int i=0;i<m;++i){
			scanf("%s",a[i]);
		}
		for(int i=0;i<m-1;++i){
			for(int j=i+1;j<m;++j){
				if(check(a[i],a[j])){
					char tmp[100];
					strcpy(tmp,a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],tmp);
				}
			}
		}
		for(int i=0;i<m;++i){
			printf("%s",a[i]);
		}
		printf("\n");
	}
}
