#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int cnt = 0;

int main(){
    ll t;
    scanf("%lld",&t);
    for(int y=1;y<=t;y++){
    	int n=0;
    	int c= 0,l=0;
    	char kitu = ' ';
    	while(kitu!='\n'){
    		int x;
    		scanf("%d",&x);
    		if(x%2==0) ++c;
    		else ++l;
    		++n;
    		kitu = getchar();
		}
		if(n%2==0 && c>l) printf("YES\n");
		else if(n%2!=0 && l>c) printf("YES\n");
		else printf("NO\n");
	}
}  

