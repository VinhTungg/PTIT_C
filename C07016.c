// Created by Vĩnh Tùng siêu cấp đẹp trai on 3/31/2025.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Candidate {
    char name[50], date[50];
    double Point1, Point2, Point3, FinalPoint;
    int id;
};
typedef struct Candidate Candidate;

void nhap(Candidate *candidate, int i) {
    getchar();
    gets(candidate->name);
    scanf("%s", candidate->date);
    scanf("%lf %lf %lf", &candidate->Point1, &candidate->Point2, &candidate->Point3);
    candidate->id = i;
    candidate->FinalPoint = candidate->Point1 + candidate->Point2 + candidate->Point3;
}

void xuat(Candidate candidate) {
    printf("%d %s %s %.1lf\n", candidate.id, candidate.name, candidate.date, candidate.FinalPoint);
}

void sort(Candidate candidate[], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = i + 1; j <= size; j++) {
            if (candidate[i].FinalPoint < candidate[j].FinalPoint) {
                Candidate temp = candidate[i];
                candidate[i] = candidate[j];
                candidate[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Candidate candidate[n + 1];
    for (int _ = 1; _ <= n; _++) {
        nhap(&candidate[_], _);
    }
    sort(candidate, n);
    double point = candidate[1].FinalPoint;
    for (int _ = 1; _ <= n; _++) {
        xuat(candidate[_]);
    }
}