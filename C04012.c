#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    int a[n+5];
	    foru(i,0,n-1) scanf("%d",&a[i]);
	    int b[100005] = {0};
	    foru(i,0,n-1){
	    	if(b[i]==0){
	    		int cnt = 1;
	    		foru(j,i+1,n-1){
	    			if(a[i]==a[j]){
	    				cnt = 0;
	    				b[j] = 1;
					}
				}
				if(!cnt){
					b[i] = 1;
					printf("%d ",a[i]);
				}
				
			}
		}
//	}
}