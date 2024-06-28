#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int n,m,k,x;
    scanf("%d%d%d",&n,&m,&k);
    int b[10006] = {0};
    while(m--){
    	scanf("%d",&x);
    	for(int i=(x-k>1?x-k:1);i<=(x+k<n?x+k:n);i++){
    		b[i] = 1;
		}
	}
	int cnt = 0;
	for(int i=1;i<=n;i++){
		if(!b[i]){
			for(int j=i;j<=(2*k+i<n?2*k+i:n);j++) b[j] = 1;
			++cnt;
		}
	}
	printf("%d",cnt);
}
