#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam = n/365;
	n = n%365;
	int tuan = n/7;
	n = n%7;
	printf("%d %d %d",nam,tuan,n);
}
