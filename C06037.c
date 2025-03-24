#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100];
    scanf("%s", s);
    int ans = 0;
    int used[30] = {};
    for(int i = 0; i < strlen(s); ++i){
        int a[30] = {};
        for(int j = i + 1; j < strlen(s) && s[j] != s[i] && !used[s[i] - 'A']; ++j){
            ++a[s[j] - 'A'];
        }
        used[s[i] - 'A'] = 1;
        for(int i = 0; i < 26; ++i) if(a[i] & 1) ++ans;
    }
    printf("%d", ans / 2);
}