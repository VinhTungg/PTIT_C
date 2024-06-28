#include<stdio.h>
#include<string.h>

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return a*b/gcd(a,b);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;++i){
			if(i==0){
				printf("%d ",a[i]);
				printf("%d ",lcm(a[i],a[i+1]));
			}
			else printf("%d ",lcm(a[i],a[i+1]));
		}
		printf("%d\n",a[n-1]);
	}
}