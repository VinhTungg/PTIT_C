// Created by Vĩnh Tùng siêu cấp đẹp trai on 3/31/2025.
#include <stdio.h>
#include <string.h>

struct Pokemon {
    char name[100];
    int stoneNeed, stonePosess, num;
};
typedef struct Pokemon Pokemon;

void nhap(Pokemon *pokemon) {
    scanf("%s", pokemon->name);
    scanf("%d", &pokemon->stoneNeed);
    scanf("%d", &pokemon->stonePosess);
    pokemon->num = 0;
    while (pokemon->stonePosess - pokemon->stoneNeed >= 0) {
        pokemon->num++;
        pokemon->stonePosess -= pokemon->stoneNeed;
        pokemon->stonePosess += 2;
    }
}

int main() {
    int n; scanf("%d", &n);
    Pokemon pokemon[n + 1];
    char name[100];
    int maxi = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        nhap(&pokemon[i]);
        ans += pokemon[i].num;
        if (maxi < pokemon[i].num) {
            maxi = pokemon[i].num;
            strcpy(name, pokemon[i].name);
        }
    }
    printf("%d\n%s\n", ans, name);
}