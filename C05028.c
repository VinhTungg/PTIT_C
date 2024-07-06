#include <stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define N 1005

int n;
int a[20][20];

int check(int n){
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; j++){
			if(a[i][j]) return 1;
		}
	}
	return 0;
}

void solve(){
	scanf("%d", &n);
	char tmp[20];
	foru(i, 0, n-1){
		scanf("%s", tmp);
		foru(j, 0, n -1) a[i][j] = tmp[j] - '0';
	}
	int ans = 0;
	while(check(n)){
		int col = 0, row = 0;
		foru(i, 0, n-1) foru(j, 0, n-1) if(a[i][j]){
			col = j;
			row = i;
		}
		foru(i, 0, row) foru(j, 0, col){
			if(a[i][j]) a[i][j] = !a[i][j];
			else a[i][j] = 1;
		}
		++ans;
	}
	printf("%d", ans);
}

int main(){
	int t = 1;
	//scanf("%d", &t);
	while(t--){
		solve();
	}	
}
/*
 0 1 1 0 
 0 1 0 1
 1 0 1 1
 0 1 1 0
*/
