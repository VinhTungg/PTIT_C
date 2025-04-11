// Created by Vĩnh Tùng siêu cấp đẹp trai on 3/25/2025.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Product {
    char name[50], group[50];
    int id;
    double sellPrice, buyPrice, profit;
};
typedef struct Product Product;

void nhap(Product *product, int i) {
    gets(product->name);
    gets(product->group);
    scanf("%lf", &product->buyPrice);
    scanf("%lf", &product->sellPrice);
    product->id = i;
    product->profit = product->sellPrice - product->buyPrice;
}

void xuat(Product product) {
    printf("%d %s %s %.2lf\n", product.id, product.name, product.group, product.profit);
}

void sort(Product product[], int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = i + 1; j <= size; j++) {
            if (product[i].profit < product[j].profit) {
                Product temp = product[i];
                product[i] = product[j];
                product[j] = temp;
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    Product product[t + 1];
    for (int _ = 1; _ <= t; _++) {
        getchar();
        nhap(&product[_], _);
    }
    sort(product, t);
    for (int i = 1; i <= t; i++) {
        xuat(product[i]);
    }
}