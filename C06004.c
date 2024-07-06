#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
//  int t;
//  scanf("%d",&t);
//  getchar();
//  while(t--){
    char c[300];
    gets(c);
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<strlen(c); i++){
      if(isalpha(c[i])) ++cnt1;
      if(isdigit(c[i])) ++cnt2;
    }
    printf("%d %d %d",cnt1,cnt2,strlen(c)-cnt1-cnt2);
//  }
}