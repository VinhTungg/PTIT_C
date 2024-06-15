#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int a = n, cnt = 0;
		int c = n%10;
		while(n>9){
			n/=10;
			++cnt;
		}
		int d = n;
		a = a-d*(int)pow(10,cnt)-c;
		int res = c*(int)pow(10,cnt)+a+d;
		printf("%d",res); 
//	}
}
