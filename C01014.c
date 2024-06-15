#include <stdio.h>

int main(){
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a==0 && b!=0){
	 	printf("Vo nghiem");
	 	return 0;
	}
	if(a==0 && b==0) printf ("Vo so nghiem");
	else printf("%.2lf",1.0*-b/a);
}
