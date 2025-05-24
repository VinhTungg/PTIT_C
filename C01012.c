#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

/*           Vĩnh Tùng đẹp trai siêu cấp vũ trụ
Nếu có ai đẹp trai hơn anh, đó chỉ có thể là anh của ngày mai */
int t = 1;

int main() {
    // scanf("%d", &t);
    while (t--) {
        ll n, max = -1e18;
        while (scanf("%lld", &n) != EOF) {
            if (n > max) max = n;
        }
        printf("%lld\n", max);
    }
}