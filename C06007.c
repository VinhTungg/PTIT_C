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
    char s[300];
    scanf("%s",s);
    int a[20][50];
    int n=0;
    char *tok = strtok(c, " ");
    while(tok != NULL){
      if(strcmp(tok,s)!=0){
        strcpy(a[n],tok);
        ++n;
      }
      tok = strtok(NULL, " ");
    }
    for(int i=0;i<n;i++){
      printf("%s ",a[i]);
    }
//  }
}