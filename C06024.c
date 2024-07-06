#include<stdio.h>
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

void reverse(int a[], int n){
	int l = 0, r = n-1;
	while(l<r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l; --r;
	}
}

void cong(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b), n = 0;
	int x[n1], y[n1], z[n1+1];
	foru(i,0,n1-1) x[i] = a[i] - '0';
	foru(i,0,n2-1) y[i] = b[i] - '0';
	reverse(x,n1); reverse(y,n2);
	foru(i,n2,n1-1) y[i] = 0;
	int nho = 0;
	foru(i,0,n1-1){
		int tmp = x[i] + y[i] +nho;
		z[n++] = tmp%10;
		nho = tmp / 10;
	}
	if(nho) z[n++] = nho;
	for(int i = n-1;i>=0;i--) printf("%d",z[i]);
}

int main(){
	int t;
	scanf("%d",&t);
	foru(y,1,t){
	    char c[1001],d[1001];
	    scanf("%s%s",c,d);
	    if(strlen(c)>=strlen(d)) cong(c,d);
	    else cong(d,c);
	    printf("\n");
	}
}
    
