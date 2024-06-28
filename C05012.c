#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,n,a[25][25],b[25][25],tmp;

int main(){
    scanf("%d",&t);
    foru(i,1,t){
        scanf("%d",&n);
        printf("Test %d:\n",i);
        foru(j,0,n-1){
            foru(z,0,j){
                a[j][z]=z+1;
                b[z][j]=z+1;
            }
            foru(z,j+1,n-1){
                a[j][z]=0;
                b[z][j]=0;
            }
        }
        foru(j,0,n-1){
            foru(z,0,n-1){
                tmp=0;
                foru(k,0,n-1) tmp+=a[j][k]*b[k][z];
                printf("%d ",tmp);
            }
            printf("\n");
        }
    }
}
    
