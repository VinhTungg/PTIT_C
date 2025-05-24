#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long

/*           Vĩnh Tùng đẹp trai siêu cấp vũ trụ
Nếu có ai đẹp trai hơn anh, đó chỉ có thể là anh của ngày mai */
int t = 1;

int main() {
    scanf("%d", &t);
    while (t--) {
        char s[20];
        scanf("%s", s);
        int len = strlen(s);
        char max = '0' - 1, min = '9' + 1;
        for (int i = 0; i < len; ++i) {
            if (s[i] > max) max = s[i];
            if (s[i] < min) min = s[i];
        }
        printf("%c %c\n", max, min);
    }
}