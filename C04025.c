#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]= a[j];
				a[j]= tmp;
			}
		}
	}
}

int b[100],c[100];

int main(){
//    ll t;
//    scanf("%lld",&t);
//    while(t--){
    	int n;
    	scanf("%d",&n);
    	int a[n+5];
    	int cnt1 = 0,cnt2 = 0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
    		if(a[i]%2==0) b[cnt1++] = a[i];
    		else c[cnt2++] = a[i];
		}
		sort(b,cnt1);
		sort(c,cnt2);
		for(int i=0;i<cnt1;i++){
			printf("%d ",b[i]);
		}
		for(int i=0;i<cnt2;i++){
			printf("%d ",c[i]);
		}
		printf("\n");
//	}
}  
