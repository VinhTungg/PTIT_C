#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define ll long long

int main(){
    int n;
    scanf("%d",&n);
    printf((n & 1) ? "LE" : "CHAN");
}