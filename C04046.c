#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;i++)

int cmp(const void *a, const void *b){
    int *x = (int*) a;
    int *y = (int*) b;
    return *x > *y;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
        int a[n + 5];
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
        qsort(a, n, sizeof(int), cmp);
        int min = 1e9;
        foru(i, 1, n - 1){
            if(min > a[i] - a[i - 1]){
                min = a[i] - a[i - 1];
            }
        }
        int cnt = 0;
        foru(i, 1, n - 1){
            if (min == a[i] - a[i - 1]){
                ++cnt;
            }
            
        }
        printf("%d %d\n", min, cnt);
	}
}
