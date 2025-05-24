#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

/*           Vĩnh Tùng đẹp trai siêu cấp vũ trụ
Nếu có ai đẹp trai hơn anh, đó chỉ có thể là anh của ngày mai */
int t = 1, id = 1;

struct SinhVien {
    int msv;
    char ten[505];
    double d1, d2, d3;
};
typedef struct SinhVien SV;

SV a[505];

void nhap(SV *sv) {
    fgets(sv->ten, sizeof(sv->ten), stdin);
    sv->ten[strcspn(sv->ten, "\n")] = 0;
    scanf("%lf %lf %lf", &sv->d1, &sv->d2, &sv->d3);
}

int check(SV a) {
    return a.d1 <= a.d2 && a.d2 <= a.d3;
}

int main() {
    // scanf("%d", &t);
    while (t--) {
        int n;
        while (scanf("%d", &n)) {
            if (n == 1) {
                int m; scanf("%d", &m);
                printf("%d\n", m);
                while (m--) {
                    getchar();
                    nhap(&a[id]);
                    a[id].msv = id;
                    id++;
                }
            }
            else if (n == 2) {
                int num; scanf("%d", &num);
                printf("%d\n", num);
                getchar();
                SV tmp;
                nhap(&tmp);
                tmp.msv = num;
                a[num] = tmp;
            }
            else {
                for (int i = 1; i < id; ++i) {
                    if (check(a[i])) {
                        printf("%d %s %.1lf %.1lf %.1lf\n", a[i].msv, a[i].ten, a[i].d1, a[i].d2, a[i].d3);
                    }
                }
                break;
            }
        }
    }
}