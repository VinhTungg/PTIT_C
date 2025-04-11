//
// Created by VinhTung on 3/25/2025.
//
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int gcd(int a,int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct Fraction {
    int a, b;
};
typedef struct Fraction Fraction;

void Nhap(Fraction *a) {
    scanf("%d%d", &a->a, &a->b);
}

void Xuat(Fraction a) {
    printf("%d/%d", a.a, a.b);
}

void Rutgon(Fraction *fraction) {
    int tmp = gcd(fraction->a, fraction->b);
    fraction->a = fraction->a / tmp;
    fraction->b = fraction->b / tmp;
}

void Tong(Fraction a, Fraction b) {
    Quydong(&a, &b);
    Fraction c;
    c.a = a.a + b.a;
    c.b = a.b;
    Rutgon(&c);
    printf("%d/%d\n", c.a, c.b);
}

void Thuong(Fraction a, Fraction b) {
    Quydong(&a, &b);
    Fraction c;
    c.a = a.a * b.b;
    c.b = a.b * b.a;
    Rutgon(&c);
    printf("%d/%d\n", c.a, c.b);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int _ = 1; _ <= t; ++_) {
        printf("Case #%d:\n", _);
        Fraction a, b;
        Nhap(&a);
        Nhap(&b);
        Rutgon(&a);
        Rutgon(&b);
        int lcm = (a.b * b.b) / gcd(a.b, b.b);
        a.a *= (lcm / a.b);
        b.a *= (lcm / b.b);
        a.b = b.b = lcm;
        Xuat(a);
        printf(" ");
        Xuat(b);
        printf("\n");
        Tong(a, b);
        Thuong(a, b);
    }
}