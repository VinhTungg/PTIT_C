#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void reverse(char a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        char tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
}

void sum(char s[], char x[], char main[]){
    reverse(s, strlen(s));
    reverse(x, strlen(x));
    int len_s = strlen(s), len_x = strlen(x);
    for(int i = len_x; i < len_s; ++i) x[i] = '0';
    x[len_s] = '\0';
    int n = len_s + 2;
    char *res = (char *)calloc(n, sizeof(char));
    int nho = 0;
    for(int i = 0; i < len_s; ++i){
        int digit = (s[i] - '0') + (x[i] - '0') + nho;
        res[i] = (digit % 10) + '0';
        nho = digit / 10;
    }
    if(nho) res[len_s] = nho + '0';
    res[len_s + 1] = '\0';
    reverse(res, strlen(res));
    int st = 0;
    while(res[st] == '0' && res[st + 1] != '\0') ++st;
    strcpy(main, res + st);
    free(res);
}

int main(){
    char main[1005];
    fgets(main, sizeof(main), stdin);
    main[strcspn(main, "\n")] = '\0';
    while(strlen(main) > 1){
        char s[1005], x[1005];
        int n = strlen(main);
        int mid = n / 2;
        strncpy(s, main, mid);
        s[mid] = '\0';
        strcpy(x, main + mid);
        if(strlen(s) >= strlen(x)) sum(s, x, main);
        else sum(x, s, main);
        printf("%s\n", main);
    }
}
