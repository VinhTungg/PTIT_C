#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int check(int a[]){
    if(a[34] & 1 || a[39] & 1) return 0;
    if(a[40] != a[41]) return 0;
    if(a[91] != a[93]) return 0;
    if(a[123] != a[125]) return 0;
    return 1;
}

int main(){
    char s[1005];
    scanf("%s", s);
    int a[200] = {};
    for(int i = 0; i < strlen(s); ++i){
        a[s[i]]++;
    }
    printf("%d", check(a));
}