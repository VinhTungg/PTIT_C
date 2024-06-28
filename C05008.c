#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	scanf("%d",&t);
	for(int y=1;y<=t;y++){
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int a[20][20],b[20][20] = {0};
	    ll sum1 = 0,max1 = -1e9,d;
	    foru(i,1,n){
	    	sum1 = 0;
	    	foru(j,1,m){
	    		scanf("%d",&a[i][j]);
	    		sum1 += a[i][j];
			}
			if(max1<sum1){
				max1 = sum1;
				d = i;
			}
		}
		n--;
		foru(i,d,n){
	    	foru(j,1,m){
	    		a[i][j] = a[i+1][j];
			}
		}
		ll sum2 = 0,max2 = -1e9,e;
		foru(i,1,m){
			sum2 = 0;
			foru(j,1,n){
				sum2 += a[j][i];
			}
			if(max2<sum2){
				max2 = sum2;
				e = i;
			}
		}
		m--;
		foru(i,e,n){
	    	foru(j,1,m){
	    		a[j][i] = a[j][i+1];
			}
		}
		printf("Test %d:\n",y);
		foru(i,1,n){
			foru(j,1,m){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
