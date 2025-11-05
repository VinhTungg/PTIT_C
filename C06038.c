#include <stdio.h>
#include <string.h>
#pragma GCC Optimize("Ofast")

static int mult_str_small(const char *s, int m, char *out, int width) {
    int n = (int)strlen(s);
    int carry = 0;
    char tmp[130];
    int tlen = 0;

    for (int i = n - 1; ~i; --i) {
        int d = s[i] - '0';
        int v = d * m + carry;
        tmp[tlen++] = (char)('0' + (v % 10));
        carry = v / 10;
    }
    while (carry) {
        tmp[tlen++] = (char)('0' + (carry % 10));
        carry /= 10;
    }

    for (int i = 0; i < tlen >> 1; ++i) {
        char c = tmp[i];
        tmp[i] = tmp[tlen - 1 - i];
        tmp[tlen - 1 - i] = c;
    }
    tmp[tlen] = '\0';

    if (tlen > width) return 0;
    int pad = width - tlen;
    for (int i = 0; i < pad; ++i) out[i] = '0';
    memcpy(out + pad, tmp, tlen + 1);
    return 1;
}

static char* is_cyclic(const char *num) {
    int len = (int)strlen(num);
    char doubled[140];
    if (len * 2 + 1 > (int)sizeof(doubled)) return "NO";
    strcpy(doubled, num);
    strcat(doubled, num);

    char prod[130];
    for (int k = 1; k <= len; ++k) {
        if (!mult_str_small(num, k, prod, len)) return "NO";
        if (strstr(doubled, prod) == NULL) return "NO";
    }
    return "YES";
}

int main() {
    int t = 1;
    scanf("%d", &t);
    while (t--) {
        char num[70]; 
        scanf("%s", num);
        puts(is_cyclic(num));
    }
}
