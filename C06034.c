#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[100] = {};

int main(){
	a['I'] = 1;
	a['V'] = 5;
	a['X'] = 10;
	a['L'] = 50;
	a['C'] = 100;
	a['D'] = 500;
	a['M'] = 1000;
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100];
		scanf("%s", s);
		int cnt = a[s[strlen(s) - 1]];
		for(int i = strlen(s) - 2; i >= 0; i--){
			if(a[s[i]] < a[s[i + 1]]) cnt -= a[s[i]];
			else cnt += a[s[i]];
		}
		printf("%d\n", cnt);
	}
}