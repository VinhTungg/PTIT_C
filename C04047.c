#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

struct In4{
	int batdau, thoigian;
};

typedef struct In4 in4;
in4 a[105];

int cmp(const void *a, const void *b){
	in4 *x = (in4*) a;
	in4 *y = (in4*) b;
	return x->batdau != y->batdau ? x->batdau > y->batdau : x->thoigian > y->thoigian;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d\n", &a[i].batdau, &a[i].thoigian);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	int ans = a[0].batdau + a[0].thoigian;
	for(int i = 1; i < n; i++){
		if(ans <= a[i].batdau) ans = a[i].batdau;
		ans += a[i].thoigian;
	}
	printf("%d", ans);
}