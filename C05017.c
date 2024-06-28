#include <stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define N 1005

void solve(){
	
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n ,m; scanf("%d%d", &n, &m);
		int a[n+5][m+5];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int cnt = 1;
		int row1 = 0, row2 = n - 1, col1 = 0, col2 = m - 1;
		while(cnt <= m*n){
			for(int i = col1; i <= col2; i++){
				if(cnt <= m*n) printf("%d ", a[col1][i]);
				++cnt;
			}
			++row1;
			for(int i = row1; i <= row2; i++){
				if(cnt <= m*n)printf("%d ", a[i][col2]);
				++cnt;
			}
			--col2;
			for(int i = col2; i >= col1; i--){
				if(cnt <= m*n) printf("%d ", a[row2][i]);
				++cnt;
			}
			--row2;
			for(int i = row2; i >= row1; --i){
				if(cnt <= m*n) printf("%d ", a[i][col1]);
				++cnt;
			}
			col1++;
		}
		printf("\n");
	}
}
/*
 1 2  3  4
 5 6  7  8 
 9 10 11 12
*/
