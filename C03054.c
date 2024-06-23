#include<stdio.h>
#include<math.h>
#include<string.h>

int t,i,j,kt;
char a[18];

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        kt=1;
        for(i=0;i<strlen(a);++i){
            if (a[i]=='0'||a[i]=='8'||a[i]=='9') a[i]='0';
            else if (a[i]!='1'){
                kt=0;
                break;
            }
        }
        if (!kt) printf("INVALID");
        else{
            kt=0;
            for(i=0;i<strlen(a);++i)
                if (a[i]>'0'){
                    kt=1;
                    break;
                }
            if (!kt) printf("INVALID");
            else for(j=i;j<strlen(a);++j) printf("%c",a[j]);
        }
        printf("\n");
    }
}
