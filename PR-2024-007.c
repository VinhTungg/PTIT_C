#include<stdio.h>
#include<math.h>
#define ll long long

void cswap(char *a, char *b) {
    char t[1005];
    strcpy(t, a);
    strcpy(a, b);
    strcpy(b, t);
}

void swap(double *a, double *b) {
    double t = *a;
    *a = *b;
    *b = t;
}

void ghep(char *s1, char *s2) {
    char temp[10005];
    strcpy(temp, s1);
    strcat(temp, s2);
    strcpy(s1, temp);
}

int check (double a[], int m) {
    for(int i = 1; i < m; i++) {
        if(a[0] - a[i] > 0.000000001) return 0;
    }
    return 1;
}

void sort(double a[], char b[][10005], int n){
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[i] - a[j] > 0.000000001){
                swap(&a[i], &a[j]);
                cswap(b[i], b[j]);
            }
        }
    }
}

void out(double a[], char b[][10005], int n){
    for(int i = 0; i < n; ++i){
        printf("%s", b[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    for(int i = 0; i < n; ++i){
        printf("%.3lf", a[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
}

int main(){
    int t; 
    scanf("%d", &t);
    while(t--){
        int n; 
        scanf("%d", &n);
        double a[n + 5];
        char b[n + 5][10005];
        for(int i = 0; i < n; ++i) scanf("%s", b[i]);
        for(int i = 0; i < n; ++i) scanf("%lf", &a[i]);
        sort(a, b, n);
        out(a, b, n);
        while(n > 1){
            a[0] += a[1];
            char tmp[10005];
            ghep(b[0], b[1]);
            for(int i = 1; i < n - 1; ++i){
                a[i] = a[i + 1];
                strcpy(b[i], b[i + 1]);
            }
            n--;
            if(!check(a, n)){
                out(a, b, n);
                sort(a, b, n);
            }
            out(a, b, n);
        }
    }
}