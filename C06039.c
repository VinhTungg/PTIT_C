#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    char s[n + 5][55];
    int b[30] = {};
    for(int i = 0; i < n; ++i) scanf("%s", s[i]);
    for(int i = 0; i < strlen(s[0]); ++i) b[s[0][i] - 'a']++;
    for(int i = 1; i < n; ++i){
        int c[30] = {};
        for(int j = 0; j < strlen(s[i]); ++j) c[s[i][j] - 'a']++;
        for(int i = 0; i < 26; ++i) if(b[i] != c[i]){
            printf("-1"); 
            return 0;
        }
    }
    int a[n + 5];
    for(int i = 0; i < n; ++i){
        int sum = 0;
        for(int j = 0; j < n; ++j){
            if(i == j) continue;
            int ans = 0;
            for(int k = 0; k < strlen(s[j]); ++k){
                int cnt = 0, tmp = 0;
                for(int z = k; z < strlen(s[j]); ++z){
                    if(s[i][tmp] == s[j][z]){
                        ++tmp;
                        ++cnt;
                    }else break;
                }
                if(ans < cnt) ans = cnt;
            }
            sum += (strlen(s[i]) - ans);
        }
        a[i] = sum;
    }
    int ans = 1e9;
    for(int i = 0; i < n; ++i){
        if(ans > a[i]) ans = a[i];
    }
    printf("%d", ans);
}