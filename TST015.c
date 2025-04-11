#include <stdio.h>
#include <math.h>

struct Triangle{
    int a, b, c;
    double Acreage;
};

typedef struct Triangle Triangle;

void Nhap(Triangle *tri){
    scanf("%d %d %d", &tri->a, &tri->b, &tri->c);
}

void In(Triangle tri){
    printf("%d %d %d\n", tri.a, tri.b, tri.c);
}

double CalcAcreage(Triangle *tri) {
    double s = 1.0 * (tri->a + tri->b + tri->c) / 2;
    tri->Acreage = sqrt(s * 1.0 * (s - tri->a) * (s - tri->b) * (s - tri->c));
    return tri->Acreage;
}

void sort(Triangle a[], int t) {
    for (int i = 0; i < t - 1; ++i) {
        for (int j = i + 1; j < t; ++j) {
            if (a[i].Acreage > a[j].Acreage) {
                Triangle temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
Triangle a[1005];

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        Nhap(&a[i]);
        CalcAcreage(&a[i]);
    }
    sort(a, t);
    for (int i = 0; i < t; i++) {
        In(a[i]);
    }
}
