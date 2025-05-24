#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

/*           Vĩnh Tùng đẹp trai siêu cấp vũ trụ
Nếu có ai đẹp trai hơn anh, đó chỉ có thể là anh của ngày mai */
int t = 1;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int tong(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int nt(int n) {
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return 0;
    return n > 1;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        int a, b; scanf("%d %d", &a, &b);
        puts(nt(tong(gcd(a, b))) ? "YES" : "NO");
    }
}