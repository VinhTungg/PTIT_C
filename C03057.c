#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

ll min(ll n){
	char s[20];
	int a,cnt=0;
	while(n!=0){
		a = n%10;
		if(a==6) s[cnt++] = '5';
		else s[cnt++] = a+'0';
		n/=10;
	}
	n=0;
	for(int i=cnt-1;i>=0;--i){
		n = n*10+s[i]-'0';
	}
	return n;
}

ll max(ll n){
	char s[20];
	int a,cnt=0;
	while(n!=0){
		a = n%10;
		if(a==5) s[cnt++] = '6';
		else s[cnt++] = a+'0';
		n/=10;
	}
	n=0;
	for(int i=cnt-1;i>=0;--i){
		n = n*10+s[i]-'0';
	}
	return n;
}

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
		ll x1,x2;
		scanf("%lld%lld",&x1,&x2);
		printf("%lld %lld\n",min(x1)+min(x2),max(x1)+max(x2));
	}
}  
