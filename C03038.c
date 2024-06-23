#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
		int a,b;
    	scanf("%d%d",&a,&b);
    	int cnt = 0;
    	for(int i=1;i<=a;i++){
    		if(i%b==0){
    			int d = i;
    			while(d%b==0){
    				++cnt;
    				d/=b;
				}
			}
		}
		printf("%d\n",cnt);
	}
}  
