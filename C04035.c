#include <stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int n;
		scanf("%d",&n);
		int min1 = 1e9, min2 = 1e9;
		int tlen = 0, txuong = 0;
		foru(i,0,n-1){
			int a,b;
			scanf("%d%d",&a,&b);
			tlen += a;
			txuong += b;
			if(min1>a) min1 = a;
			if(min2 > b) min2 = b;
		}
		tlen += min2;
		txuong += min1;
		if(tlen > txuong) printf("%d",tlen);
		else printf("%d",txuong);
//	}
}
