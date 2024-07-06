#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int max(int a, int b){
	return a > b ? a : b;
}

int main() {
	int t = 1;
	//scanf("%d",&t);
	while(t--) {
		char s[55];
		scanf("%s", s);
		int ans = 0;
		int tmp[60] = {};
		tmp[0] = 1;
		for(int i = 0; i < strlen(s); i++){
			int res = 0;
			for(int j = 0; j < i; j++){
				if(s[i] > s[j] && res < tmp[j]) res = tmp[j];
			}
			tmp[i] = res + 1;
		}
		for(int i = 0; i < 50; i++){
			ans = max(ans, tmp[i]);
		}
		printf("%d", 26 - ans);
	}
}