#include <stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		int minx = 1e9, miny = 1e9;
		int maxx = -1e9, maxy = -1e9;
		int a[2][4];
		foru(i,0,1){
			foru(j,0,3){
				scanf("%d",&a[i][j]);
				if(j%2==0){
					if(minx>a[i][j]) minx = a[i][j];
					if(maxx<a[i][j]) maxx = a[i][j];
				}else{
					if(miny>a[i][j]) miny = a[i][j];
					if(maxy<a[i][j]) maxy = a[i][j];
				}
			}
		}
		int max = maxx - minx;
		if(max < (maxy-miny)) max = maxy-miny;
		printf("%d",max*max);
//	}
}
