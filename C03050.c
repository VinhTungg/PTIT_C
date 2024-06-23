#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long
int c[100005]= {0};
int res(int n){
	foru(i,1,n-1){
		if(c[i]==n-1) return 1;
	}
	return 0;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
		foru(i,1,n-1){
			int a,b;
			scanf("%d%d",&a,&b);
			c[a]++;
			c[b]++;
		}
		printf("%s",(res(n)?"Yes":"No"));
//	}
}
    
