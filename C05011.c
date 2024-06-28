#include<stdio.h>
#include<math.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	scanf("%d",&t);
	for(int y=1;y<=t;y++){
	    int n,m;
		scanf("%d%d",&n,&m);
		int a[n+1][m+1],b[m+1][n+1];
		ll c[n+1][n+1];
		printf("Test %d:\n",y);
		for(int i=0; i<n; i++){
			for(int j=0;j<m;j++){
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				c[i][j] = 0;
				for(int h=0;h<m;h++){
					c[i][j] += 1LL*a[i][h]*1LL*b[h][j];
				}
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
}
