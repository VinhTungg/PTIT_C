#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
//	int t;
//	scanf("%d",&t);
//	foru(y,1,t){
	    int n;
	    scanf("%d",&n);
	    //printf("Test %d:\n",y);
	    int a[35][35];
	    int max,cnt = 0,b;
	    foru(i,1,n){
	    	cnt = 0;
	    	foru(j,1,n){
	    		scanf("%d",&a[i][j]);
	    		cnt += nt(a[i][j]);
	    		if(max<cnt){
	    			max = cnt;
	    			b = i;
				}
			}
		}
		printf("%d\n",b);
		foru(t,1,n){
			if(nt(a[b][t])) printf("%d ",a[b][t]);
		}
//		printf("\n");
//	}
}
    
