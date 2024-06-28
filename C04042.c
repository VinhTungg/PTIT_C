#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    int a[n+5];
	    foru(i,0,n-1) scanf("%d",&a[i]);
	    int res = -1e9;
	    foru(i,0,n-1){
	    	foru(j,i+1,n-1) if(a[i]==a[j]){
	    		res = a[i];
			}
			if(res != -1e9) break;
		}
		if(res == -1e9) printf("NO\n");
		else printf("%d\n",res);
	}
}
    
