#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

/*           Vĩnh Tùng đẹp trai siêu cấp vũ trụ
Nếu có ai đẹp trai hơn anh, đó chỉ có thể là anh của ngày mai */
int t = 1;

ll __gcd(ll a, ll b) {
    if (b == 0) return a;
    return __gcd(b, a % b);
}

struct PhanSo {
    ll tu, mau;
};
typedef struct PhanSo PhanSo;

void nhap(PhanSo *p) {
    scanf("%lld %lld", &p->tu, &p->mau);
}

PhanSo rutGon(PhanSo p) {
    ll gcd = __gcd(p.tu, p.mau);
    p.tu /= gcd;
    p.mau /= gcd;
    return p;
}

PhanSo QuyDong(PhanSo p, PhanSo q) {
    PhanSo res;
    p = rutGon(p);
    q = rutGon(q);
    ll mau = p.mau * q.mau / __gcd(p.mau, q.mau);
    res.tu = p.tu * mau / p.mau;
    res.mau = mau;
    return res;
}

void tong(PhanSo p, PhanSo q) {
    PhanSo res;
    res.tu = p.tu * q.mau + q.tu * p.mau;
    res.mau = p.mau * q.mau;
    res = rutGon(res);
    printf("%lld/%lld\n", res.tu, res.mau);
}

void chia(PhanSo p, PhanSo q) {
    PhanSo res;
    res.tu = p.tu * q.mau;
    res.mau = p.mau * q.tu;
    res = rutGon(res);
    printf("%lld/%lld\n", res.tu, res.mau);
}

int main() {
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i) {
        printf("Case #%d:\n", i);
        PhanSo p, q;
        nhap(&p);
        nhap(&q);
        printf("%lld/%lld %lld/%lld\n", QuyDong(p, q).tu, QuyDong(p, q).mau, QuyDong(q, p).tu, QuyDong(q, p).mau);
        tong(p, q);
        chia(p, q);
    }
}