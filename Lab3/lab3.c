#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int luachon;
    do {
        printf("\nWelcome to menu for Đạt!\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch(luachon) {
            case 1: {
                double dtb;
                do {
                    printf("Nhap diem trung binh (0-10): ");
                    scanf("%lf", &dtb);
                    if(dtb < 0 || dtb > 10)
                        printf("Diem trung binh khong hop le. Vui long nhap lai!\n");
                } while(dtb < 0 || dtb > 10);
                if(dtb >= 9) printf("Xep loai: Xuat sac\n");
                else if(dtb >= 8) printf("Xep loai: Gioi\n");
                else if(dtb >= 6.5) printf("Xep loai: Kha\n");
                else if(dtb >= 5) printf("Xep loai: Trung binh\n");
                else printf("Xep loai: Yeu\n");
                break;
            }
            case 2: {
                float a, b;
                printf("Phuong trinh bac nhat Ax + B = 0\n");
                printf("Nhap A: "); scanf("%f", &a);
                printf("Nhap B: "); scanf("%f", &b);
                if(a == 0){
                    if(b == 0) printf("Phuong trinh co vo so nghiem\n");
                    else printf("Phuong trinh vo nghiem\n");
                } else {
                    printf("Phuong trinh co nghiem x = %.2f\n", -b/a);
                }
                break;
            }
            case 3: {
                float a, b, c;
                printf("Phuong trinh bac hai Ax^2 + Bx + C = 0\n");
                printf("Nhap A: "); scanf("%f", &a);
                printf("Nhap B: "); scanf("%f", &b);
                printf("Nhap C: "); scanf("%f", &c);
                if(a == 0){
                    if(b == 0){
                        if(c == 0) printf("Phuong trinh co vo so nghiem\n");
                        else printf("Phuong trinh vo nghiem\n");
                    } else {
                        printf("Phuong trinh co nghiem duy nhat x = %.2f\n", -c/b);
                    }
                } else {
                    float delta = b*b - 4*a*c;
                    if(fabs(delta) < 1e-6) {
                        printf("Phuong trinh co nghiem kep x = %.2f\n", -b/(2*a));
                    } else if(delta > 0){
                        float x1 = (-b + sqrt(delta)) / (2*a);
                        float x2 = (-b - sqrt(delta)) / (2*a);
                        printf("Phuong trinh co 2 nghiem phan biet:\n");
                        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
                    } else {
                        printf("Phuong trinh vo nghiem\n");
                    }
                }
                break;
            }
            case 4: {
                int sodien;
                double tiendien = 0;
                do {
                    printf("Nhap so dien da su dung: ");
                    scanf("%d", &sodien);
                    if(sodien < 0) printf("So dien khong hop le. Vui long nhap lai.\n");
                } while(sodien < 0);
                if(sodien > 400) { tiendien += (sodien-400)*2927; sodien=400; }
                if(sodien > 300) { tiendien += (sodien-300)*2834; sodien=300; }
                if(sodien > 200) { tiendien += (sodien-200)*2536; sodien=200; }
                if(sodien > 100) { tiendien += (sodien-100)*2014; sodien=100; }
                if(sodien > 50)  { tiendien += (sodien-50)*1734; sodien=50; }
                tiendien += sodien*1678;
                printf("So tien dien can dong: %.0f VND\n", tiendien);
                break;
            }
            case 0:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while(luachon != 0);
    return 0;
}
