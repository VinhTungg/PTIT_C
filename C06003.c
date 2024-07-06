#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
  int t;
  scanf("%d",&t);
  getchar();
  while(t--){
    char c[300];
    gets(c);
    char *tok = strtok(c, " ");
    int cnt = 0;
    while(tok!= NULL){
      ++cnt;
      tok = strtok(NULL," ");
    }
    printf("%d\n",cnt);
  }
}