#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int nt(int n){
	foru(i,2,sqrt(n)){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	for(int y=1;y<=t;y++){
	    int n;
		scanf("%d", &n);
		int a[n+1][n+1];
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				scanf("%d", &a[i][j]);
			}
		}
		ll sum = 0;
		for(int i=0; i<n; i++){
			for(int j=i;j<n;j++){
				if(nt(a[i][j])) sum += a[i][j];
			}
		}
		printf("%lld",sum);
//	}
}
