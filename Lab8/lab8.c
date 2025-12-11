#include <stdio.h>
#include <string.h>
#define LUONGCB 1500000
#define SONGAYQUYDINH 25

typedef struct {
    char MANV[20];
    char HoTen[50];
    int SoNgayCong;
    double Luong;
} NhanVien;
double tinhLuong(int ngay) {
    if (ngay == SONGAYQUYDINH) {
        return LUONGCB;
    }
    else if (ngay < SONGAYQUYDINH) {
        return LUONGCB * 0.9; // trừ 10%
    }
    else {
        int du = ngay - SONGAYQUYDINH;
        return LUONGCB + du * (LUONGCB / SONGAYQUYDINH) * 2;
    }
}
void xuat1NV(NhanVien nv) {
    printf("%-10s %-20s %-10d %-15.2f\n",
           nv.MANV, nv.HoTen, nv.SoNgayCong, nv.Luong);
}
int main() {
    NhanVien ds[5];
    printf("NHAP DANH SACH 5 NHAN VIEN:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNhan Vien %d\n", i + 1);
        printf("MANV: ");
        scanf("%s", ds[i].MANV);
        printf("Ho Ten: ");
        fflush(stdin);
        fgets(ds[i].HoTen, 50, stdin);
        ds[i].HoTen[strcspn(ds[i].HoTen, "\n")] = '\0';
        printf("So Ngay Cong: ");
        scanf("%d", &ds[i].SoNgayCong);
        ds[i].Luong = tinhLuong(ds[i].SoNgayCong);
    }
    printf("\n\n=== DANH SACH NHAN VIEN (CHUA SAP XEP) ===\n");
    printf("%-10s %-20s %-10s %-15s\n", "MANV", "HoTen", "NgayCong", "Luong");
    for (int i = 0; i < 5; i++) {
        xuat1NV(ds[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (ds[i].Luong > ds[j].Luong) {
                NhanVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("\n=== DANH SACH NHAN VIEN (SAP XEP TANG DAN THEO LUONG) ===\n");
    printf("%-10s %-20s %-10s %-15s\n", "MANV", "HoTen", "NgayCong", "Luong");
    for (int i = 0; i < 5; i++) {
        xuat1NV(ds[i]);
    }
    return 0;
}
