#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
//	int t;
//	scanf("%d",&t);
//	for(int y=1;y<=t;y++){
	    int n;
		scanf("%d", &n);
		int a[n+1][n+1];
		for(int i=1; i<=n; i++){
			for(int j=1;j<=n;j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i=1; i<=n; i++){
		    int cnt = 0;
			for(int j=1;j<=n;j++){
				if(i=j){
				    cnt = a[i][j];
				    a[i][j] = a[i][n-i+1];
				    a[i][n-i+1] = cnt;
				}
			}
		}
		for(int i=1; i<=n; i++){
			for(int j=1;j<=n;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
//	}
}
