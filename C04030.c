#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int sort1(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int sort2(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int main(){
    int t;
    scanf("%d",&t);
    int d = t;
    while(t--){
    	int n;
    	scanf("%d",&n);
    	int a[n+5],b[n+5];
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
    		scanf("%d",&b[i]);
		}
		sort1(a,n);sort2(b,n);
		printf("Test %d:\n",d-t);
		int cnt1 = 0,cnt2 = 0;
		for(int i=0;i<2*n;i++){
			if(i%2==0) printf("%d ",a[cnt1++]);
			else printf("%d ",b[cnt2++]);
		}
		printf("\n");
	}
}  
