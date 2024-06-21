#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#include<limits.h>

int t,n,a[10]={0,1,9,18,90,180,900,1800,9000};

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    	scanf("%d",&n);
    	printf("%d\n",a[n-1]);
	}
}  
