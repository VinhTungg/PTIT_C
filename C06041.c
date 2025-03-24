#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100005];
    scanf("%s", s);
    char ans[100005];
    ans[0] = s[0];
    int cnt = 1;
    int max_char = strlen(s);
    for(int i = 1; i < max_char; ++i){
        while(cnt > 0 && ans[cnt - 1] < s[i]) --cnt;
        ans[cnt++] = s[i];
        // printf("%d\n", cnt);
        // printf("%s\n", ans);
    }
    ans[cnt] = '\0';
    printf("%s", ans);
}