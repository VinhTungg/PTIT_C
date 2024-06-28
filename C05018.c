#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)

int main(){
	int t;
	scanf("%d",&t);
	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    int h1 = 0,h2=n-1,c1=0,c2=n-1;
	    int cnt = n*n;
	    int a[n+1][n+1];
	    printf("Test %d:\n",y);
	    while(h1<=h2 && c1<=c2){
	    	foru(i,c1,c2){
	    		a[h1][i] = cnt;
	    		--cnt;
			}
			++h1;
			foru(i,h1,h2){
				a[i][c2] = cnt;
				--cnt;
			}
			--c2;
			if(c1<=c2){
				for(int i= c2; i>=c1;--i){
					a[h2][i] = cnt;
					--cnt;
				}
			}
			--h2;
			if(h2>=h1){
				for(int i=h2;i>=h1;--i){
					a[i][c1] = cnt;
					--cnt;
				}
				++c1;
			}
		}
		foru(i,0,n-1){
			foru(j,0,n-1){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
    
