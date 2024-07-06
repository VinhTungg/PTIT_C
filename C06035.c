#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int solve(char c[]){
	int l = 0, r = strlen(c)-1, cnt = 0;
	while(l < r){
		if((int)c[l] != (int)c[r]) ++cnt;
		++l; --r;
	}
	if(cnt != 1) return 0;
	return 1;
}

int solve1(char c[]){
	int l = 0, r = strlen(c)-1, cnt = 0;
	while(l < r){
		if((int)c[l] != (int)c[r]) ++cnt;
		++l; --r;
	}
	if(cnt > 1) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1001];
		scanf("%s",s);
		if((strlen(s)-1)%2!=0){
			if(solve(s)) printf("YES\n");
			else printf("NO\n");
		}else{
			if(solve1(s)) printf("YES\n");
			else printf("NO\n");
		}
	}
		
}
