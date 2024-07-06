#include <stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define N 1005

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d%d", &n, &m);
		int p1hang[1001] = {},p1cot[1001] = {}, p2hang[1001] = {}, p2cot[1001] = {};
		char s[1002][1002];
		getchar();
		foru(i, 0, n -1){
			gets(s[i]);
			foru(j,0,m-1){
				if(s[i][j] == '1'){
					p1hang[i]++;
					p1cot[j]++;
				}else if(s[i][j] == '2'){
					p2cot[j]++;
					p2hang[i]++;
				}
			}
		}
		ll ans = 0;
		foru(i,0,n-1){
		  	foru(j,0,m-1){
				if(s[i][j] == '1'){
					ans += p2hang[i] * p2cot[j]; 
				}else if(s[i][j] == '2'){
					ans += p1hang[i] * p1cot[j];
				} 
			}
		}
		printf("%lld\n", ans);
	}	
}