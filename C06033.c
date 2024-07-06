#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(!n) return 0;
		char s1[300];
		char s2[300];
		char s[500];
		getchar();
		gets(s1); gets(s2); gets(s);
		int cnt = 1, idx = 0;
		char tmp[500];
		tmp[2*n] = '\0';
		for(int i = 0; i < n; i++){
			tmp[idx] = s2[i];
			++idx;
			tmp[idx] = s1[i];
			++idx;
		}
		char tmp1[500];
		strcpy(tmp1, tmp);
		while(1){
			idx = 0;
			if(strcmp(tmp, s) == 0) break;
			for(int i = 0; i < n; i++){
				s1[i] = tmp[i];
				s2[i] = tmp[n + i];
			}
			for(int i = 0; i < n; i++){
				tmp[idx++] = s2[i];
				tmp[idx++] = s1[i];
			}
			if(strcmp(tmp1, tmp) == 0) break;
			++cnt;
		}
		if(strcmp(tmp1, tmp) == 0) printf("-1\n");
		else printf("%d\n", cnt);
	}
}
