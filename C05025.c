#include<stdio.h>
#include<math.h>
#include<limits.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

int t,m,n,a[105][105],b[10005],cnt;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    foru(i,1,t){
        scanf("%d%d",&n,&m);
        printf("Test %d:\n",i);
        cnt=0;
        foru(j,0,n-1)
            foru(z,0,m-1) scanf("%d",&a[j][z]);
        foru(j,0,n-1)
            foru(z,0,m-1)
                foru(p,j,n-1)
                    foru(q,z,m-1)
                        if (a[j][z]>a[p][q]) swap(&a[j][z],&a[p][q]);
        foru(j,0,n-1){
            foru(z,0,m-1) printf("%d ",a[j][z]);
            printf("\n");
        }
    }
}
