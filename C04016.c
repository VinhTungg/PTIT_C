#include <stdio.h>
#include <math.h>
#define ll long long

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d",&t);
	int d=t;
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		int b[100006];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		sort(a,n);
		printf("Test %d:\n",d-t);
		for(int i=0;i<n;i++){
			if(b[a[i]]>=1 && nt(a[i]) && a[i]>1){
				printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}
