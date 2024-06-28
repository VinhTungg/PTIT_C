#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		for(int i = 0; i < 10; i++){
			while(n >= a[i]){
				n -= a[i];
				++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}  
