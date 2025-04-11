// Created by Vĩnh Tùng siêu cấp đẹp trai on 4/1/2025.
#include <stdio.h>
#include <math.h>

struct Point {
    double x, y;
};
typedef struct Point Point;

void nhap(Point *point) {
    scanf("%lf%lf", &point->x, &point->y);
}

double distance(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int check(double disA, double disB, double disC) {
    return disA + disB > disC && disA + disC > disB && disB + disC > disA;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        Point point[3];
        for (int i = 0; i < 3; i++) {
            nhap(&point[i]);
        }
        double disA = distance(point[0], point[1]), disB = distance(point[2], point[0]), disC = distance(point[1], point[2]);
        if (!check(disA, disB, disC)) printf("INVALID\n");
        else {
            double ans = sqrt((disA + disB + disC) * (disA + disB - disC) * (disA - disB + disC) * (- disA + disB + disC)) / 4;
            printf("%.2lf\n", ans);
        }
    }
}