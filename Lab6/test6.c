#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    int n;
    printf("Nhap do dai mang A: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So phan tu A khong hop le.\n");
        return 1;
    }
    int *a = malloc(n * sizeof *a);
    if (!a) {
        perror("Khong the cap phat bo nho cho A");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) {
            printf("Nhap khong hop le.\n");
            free(a);
            return 1;
        }
    }
    printf("\n--- Danh sach Mang A ---\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: %d\n", i, a[i]);
    }
    int64_t S = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            S += a[i];
            dem++;
        }
    }
    if (dem > 0) {
        double TB = (double)S / dem;
        printf("\nTrung binh cac so chia het cho 3: %.2f\n", TB);
    } else {
        printf("\nKhong co so nao chia het cho 3 trong mang A!\n");
    }
    free(a);
    /* --- PHAN 2: Tim Max/Min --- */
    int m;
    printf("\n--- PHAN 2: Tim Max/Min ---\n");
    printf("Nhap do dai mang B: ");
    if (scanf("%d", &m) != 1 || m <= 0) {
        printf("So phan tu B khong hop le.\n");
        return 1;
    }
    int *b = malloc(m * sizeof *b);
    if (!b) {
        perror("Khong the cap phat bo nho cho B");
        return 1;
    }
    for (int j = 0; j < m; j++) {
        printf("Nhap phan tu b[%d]: ", j);
        if (scanf("%d", &b[j]) != 1) {
            printf("Nhap khong hop le.\n");
            free(b);
            return 1;
        }
    }
    printf("\n--- Danh sach Mang B ---\n");
    for (int j = 0; j < m; j++) {
        printf("B[%d]: %d\n", j, b[j]);
    }
    int max = b[0];
    int min = b[0];
    for (int j = 1; j < m; j++) {
        if (b[j] > max) max = b[j];
        if (b[j] < min) min = b[j];
    }
    printf("\nGia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    free(b);
    return 0;
}
