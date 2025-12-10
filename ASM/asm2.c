#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int luachon;
    do {
        printf("\n_____________________________________");
        printf("\n/WELCOME TO DANGTHANHDAT ASSIGNMENT 1");
        printf("\n+++++++++++++++++++++++++++++++++++++");
        printf("\n1. Kien tra so nguyen");
        printf("\n2. Uoc so va boi so chung cua 2 so");
        printf("\n3. Tinh tien cho quan karaoke");
        printf("\n4. Tinh tien dien");
        printf("\n5. Chuc nang doi tien");
        printf("\n6. Tinh lai suat vay tra gop tu ngan hang");
        printf("\n7. Vay tien mua xe");
        printf("\n8. Sap xep thong tin sinh vien");
        printf("\n9. Xay dung game POLY-LOTT");
        printf("\n10. Tinh toan phan so");
        printf("\n------------------------------");
        printf("\n0. Exit");
        printf("\nNhap vao 1-10: ");
        scanf("%d", &luachon);
        switch (luachon) {
        case 1: {
            int x;
            printf("\nNhap vao so nguyen X: ");
            scanf("%d", &x);
            printf("\n=> %d la so nguyen.", x);
            int isPrime = 1;
            if (x < 2) isPrime = 0;
            else {
                for (int i = 2; i <= sqrt(x); i++) {
                    if (x % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
                printf("\n=> %d la so nguyen to.", x);
            else
                printf("\n=> %d KHONG la so nguyen to.", x);
            int r = sqrt(x);
            if (r * r == x)
                printf("\n=> %d la so chinh phuong.\n", x);
            else
                printf("\n=> %d KHONG la so chinh phuong.\n", x);
            break;
        }
        case 2: {
            int x, y;
            printf("\nNhap so nguyen X: ");
            scanf("%d", &x);
            printf("Nhap so nguyen Y: ");
            scanf("%d", &y);
            int a = abs(x), b = abs(y);
            if (a == 0 && b == 0) {
                printf("\nKhong the tinh UCLN/BCNN!\n");
                break;
            }
            int aa = a, bb = b;
            while (bb != 0) {
                int t = aa % bb;
                aa = bb;
                bb = t;
            }
            int ucln = aa;
            long long bcnn = (long long)(a / ucln) * b;
            printf("\nUCLN = %d", ucln);
            printf("\nBCNN = %lld\n", bcnn);
            break;
        }
        case 3: {
            int start, end;
            printf("\nNhap gio bat dau (12-23): ");
            scanf("%d", &start);
            printf("Nhap gio ket thuc (12-23): ");
            scanf("%d", &end);
            if (start < 12 || start > 23 || end < 12 || end > 23 || start >= end) {
                printf("\n>>> Gio khong hop le!\n");
                break;
            }
            int gioHat = end - start;
            float tongTien = (gioHat <= 3)
                ? gioHat * 150000
                : 3 * 150000 + (gioHat - 3) * (150000 * 0.7);
            if (start >= 14 && start <= 17)
                tongTien *= 0.9;
            printf("\nSo gio hat: %d", gioHat);
            printf("\n=> Tong tien: %.0f VND\n", tongTien);
            break;
        }
        case 4: {
            int sodien, kwh;
            double tiendien = 0;
            do {
                printf("\nNhap so dien (kWh): ");
                scanf("%d", &sodien);
            } while (sodien < 0);
            kwh = sodien;
            if (kwh > 400) { tiendien += (kwh - 400) * 2927; kwh = 400; }
            if (kwh > 300) { tiendien += (kwh - 300) * 2834; kwh = 300; }
            if (kwh > 200) { tiendien += (kwh - 200) * 2536; kwh = 200; }
            if (kwh > 100) { tiendien += (kwh - 100) * 2014; kwh = 100; }
            if (kwh >  50) { tiendien += (kwh - 50)  * 1734; kwh = 50; }
            if (kwh <= 50)  tiendien += kwh * 1678;
            printf("\n=> Tien dien: %.0f VND\n", tiendien);
            break;
        }
        case 5: {
            int money;
            int menhgia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            int soluong[9] = {0};
            printf("\nNhap so tien can doi: ");
            scanf("%d", &money);
            int remaining = money;
            for (int i = 0; i < 9; i++) {
                soluong[i] = remaining / menhgia[i];
                remaining %= menhgia[i];
            }
            printf("\n===== Ket qua doi tien =====\n");
            for (int i = 0; i < 9; i++)
                if (soluong[i] > 0)
                    printf("%d VND: %d to\n", menhgia[i], soluong[i]);

            printf("============================\n");
            break;
        }
        case 6: {
            long tienvay;
            printf("\nNhap so tien vay: ");
            scanf("%ld", &tienvay);
            double laisuat = 0.05;
            int thang = 12;
            double gocTra = tienvay / thang;
            double conlai = tienvay;
            printf("\n==============================================================\n");
            printf(" Ky han | Lai tra     | Goc tra     | Tong tra     | Con lai\n");
            printf("==============================================================\n");
            for (int i = 1; i <= thang; i++) {
                double laiphaiTra = conlai * laisuat;
                double tong = gocTra + laiphaiTra;
                conlai -= gocTra;

                printf(" %-6d | %-11.0f | %-11.0f | %-12.0f | %.0f\n",
                       i, laiphaiTra, gocTra, tong, conlai);
            }
            printf("==============================================================\n");
            break;
        }
        case 7: {
            float phantram;
            printf("\nNhap %% vay (VD 80): ");
            scanf("%f", &phantram);
            long giatriXe = 500000000;
            float laisuatThang = 0.072 / 12;
            int soThang = 24;
            long sotienVay = giatriXe * (phantram / 100.0);
            double gocTra = sotienVay / soThang;
            double conlai = sotienVay;
            printf("\n==============================================================\n");
            printf(" Ky han | Lai tra     | Goc tra     | Tong tra     | Con lai\n");
            printf("==============================================================\n");
            for (int i = 1; i <= soThang; i++) {
                double laiphaiTra = conlai * laisuatThang;
                double tong = gocTra + laiphaiTra;
                conlai -= gocTra;
                printf(" %-6d | %-11.0f | %-11.0f | %-12.0f | %.0f\n",
                    i, laiphaiTra, gocTra, tong, conlai);
            }
            printf("==============================================================\n");
            break;
        }
        case 8: {
            int n;
            printf("\nNhap so luong sinh vien: ");
            scanf("%d", &n);
            struct SinhVien {
                char hoten[50];
                char nganh[50];
                float diem;
                char hocluc[20];
            };
            struct SinhVien sv[n];
            for (int i = 0; i < n; i++) {
                printf("\n--- Sinh vien %d ---\n", i + 1);
                while (getchar() != '\n');
                printf("Ho ten: ");
                fgets(sv[i].hoten, 50, stdin);
                printf("Nganh: ");
                fgets(sv[i].nganh, 50, stdin);
                printf("Diem: ");
                scanf("%f", &sv[i].diem);
                if (sv[i].diem >= 9) strcpy(sv[i].hocluc, "Xuat sac");
                else if (sv[i].diem >= 8) strcpy(sv[i].hocluc, "Gioi");
                else if (sv[i].diem >= 6.5) strcpy(sv[i].hocluc, "Kha");
                else if (sv[i].diem >= 5) strcpy(sv[i].hocluc, "Trung binh");
                else strcpy(sv[i].hocluc, "Yeu");
            }
            for (int i = 0; i < n - 1; i++)
                for (int j = i + 1; j < n; j++)
                    if (sv[i].diem < sv[j].diem) {
                        struct SinhVien temp = sv[i];
                        sv[i] = sv[j];
                        sv[j] = temp;
                    }
            printf("\n===== DANH SACH SINH VIEN =====\n");
            for (int i = 0; i < n; i++)
                printf("%d. %s - %s - %.2f - %s",
                       i + 1, sv[i].hoten, sv[i].nganh, sv[i].diem, sv[i].hocluc);
            break;
        }
        case 9: {
            int doan;
            int soRandom = rand() % 15 + 1;

            printf("\nNhap so ban chon (1-15): ");
            scanf("%d", &doan);
            printf("\nSo trung giai: %d\n", soRandom);
            if (doan == soRandom)
                printf(">>> Giai nhat!\n");
            else if (abs(doan - soRandom) == 1)
                printf(">>> Giai nhi!\n");
            else
                printf("Khong trung giai.\n");
            break;
        }
        case 10: {
            int tu1, mau1, tu2, mau2;
            printf("\nNhap phan so 1 (tu mau): ");
            scanf("%d %d", &tu1, &mau1);
            printf("Nhap phan so 2 (tu mau): ");
            scanf("%d %d", &tu2, &mau2);
            if (mau1 == 0 || mau2 == 0) {
                printf("Mau so khong duoc bang 0!\n");
                break;
            }
            printf("\nCong: %d/%d", tu1 * mau2 + tu2 * mau1, mau1 * mau2);
            printf("\nTru : %d/%d", tu1 * mau2 - tu2 * mau1, mau1 * mau2);
            printf("\nNhan: %d/%d", tu1 * tu2, mau1 * mau2);
            if (tu2 == 0) printf("\nChia : Loi chia cho 0\n");
            else printf("\nChia : %d/%d\n", tu1 * mau2, mau1 * tu2);
            break;
        }
        case 0:
            printf("\nHen gap lai!\n");
            exit(0);
        default:
            printf("\nNhap sai! Moi nhap lai!\n");
        }
    } while (luachon != 0);
    return 0;
}
