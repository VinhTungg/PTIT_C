#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
    int n; 
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(int j = 0; j < n; ++j){
            if(j > i) printf("%d ", ++cnt);
            else printf("0 ");
        }
        printf("\n");
    }
}