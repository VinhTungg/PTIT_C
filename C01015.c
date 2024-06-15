#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
		double a, b, c, del;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a==0)
	{
		if (b==0) printf("NO");
	}
	else
	{
		del=b*b-4*a*c;
		if (del<0) printf("NO");
		else if (del==0) printf("%.2lf", -1.0*b/(2*a));
		else 
		{
			double x1, x2;
			x1=1.0*(-b+(double)sqrt(del))/(2*a);x2=1.0*(-b-(double)sqrt(del))/(2*a);
			printf("%.2lf %.2lf", x1, x2);
		}
	}
//	}
}
