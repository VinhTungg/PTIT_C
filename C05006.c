#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int c[n+5][m+5];
    foru(i,1,n){
    	foru(j,1,m){
    		scanf("%d",&c[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	foru(i,1,n){
		foru(j,1,m){
			if(i==a){
				printf("%d ",c[b][j]);
			}else if(i==b){
				printf("%d ",c[a][j]);
			}else{
				printf("%d ",c[i][j]);
			}
		}
		printf("\n");
	}
}
