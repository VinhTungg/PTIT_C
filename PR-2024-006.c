#include<stdio.h>
#include<math.h>
#define ll long long

int merge(int a[], int l, int mid, int r){
    int n1 = mid - l + 1, n2 = r - mid;
    int L[n1], R[n2];
    for(int i = 0; i < n1; ++i) L[i] = a[l + i];
    for(int i = 0; i < n2; ++i) R[i] = a[mid + 1 + i];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }
    while(i < n1) a[k++] = L[i++];
    while(j < n2) a[k++] = R[j++];
}

int mergeSort(int a[], int l, int r){
    int mid = (l + r) >> 1;
    if(l < r){
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main(){
    int t = 1; 
    scanf("%d", &t);
    while(t--){
        int n, m;
        char c;
        scanf("%d %d %c", &n, &m, &c);
        int a[n], b[n], d[n + m];
        for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
        for(int i = 0; i < m; ++i) scanf("%d", &b[i]);
        switch(c){
            case 'T':
                mergeSort(&a, 0, n - 1);
                mergeSort(&b, 0, m - 1);
                for(int i = 0; i < n; ++i) d[i] = a[i];
                for(int i = 0; i < m; ++i) d[n + i] = b[i];
                merge(&d, 0, n - 1, n + m - 1);
                for(int i = 0; i < n + m; ++i) printf("%d ", d[i]);
                break;
            case 'G':
                for(int i = n + m - 1; ~i; --i) printf("%d ", d[i]);
                mergeSort(&a, 0, n - 1);
                mergeSort(&b, 0, m - 1);
                for(int i = 0; i < n; ++i) d[i] = a[i];
                for(int i = 0; i < m; ++i) d[n + i] = b[i];
                merge(&d, 0, n - 1, n + m - 1);
                break;
            case 'F':
                for(int i = 0; i < n; ++i) printf("%d ", a[i]);
                for(int i = 0; i < m; ++i) printf("%d ", b[i]);
                break;
            case 'A':
                for(int i = 0; i < m; ++i) printf("%d ", b[i]);
                for(int i = 0; i < n; ++i) printf("%d ", a[i]);
                break;
        }
        printf("\n");
    }
}