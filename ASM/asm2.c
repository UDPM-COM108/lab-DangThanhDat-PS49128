#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int luachon;
    do{
        printf("\n_____________________________________");
        printf("\n/WELCOME TO DANGTHANHDAT ASSIGNMENT 1");
        printf("\n+++++++++++++++++++++++++++++++++++++");
        printf("\n1. Kien tra so nguyen");
        printf("\n2. Uoc so va boi so chung cua 2 so");
        printf("\n3. Tính tien cho quan karaoke");
        printf("\n4. Tinh tien dien");
        printf("\n6. Tinh lai suat vay tra gop tu ngan hang");
        printf("\n5. Chuc nang doi tien");
        printf("\n7. Vay tien mua xe");
        printf("\n8. Sap xep thong tin sinh vien");
        printf("\n9. xay dung game POLY-LOTT");
        printf("\n10. Tinh toan phan so");
        printf("\n------------------------------");
        printf("\n0. Exit");
        printf("\nNhap vao 1-10 de su dung chuong trinh: ");
        scanf("%d", &luachon);
        switch (luachon){
            case 1:{
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
                    printf("\n=> %d la so chinh phuong.", x);
                else
                    printf("\n=> %d KHONG la so chinh phuong.", x);
                    printf("\n");
                }break;
           case 2: {
                int x, y;
                printf("\nNhap vao so nguyen X: ");
                scanf("%d", &x);
                printf("Nhap vao so nguyen Y: ");
                scanf("%d", &y);
                int a = abs(x), b = abs(y);
                if (a == 0 && b == 0) {
                    printf("\n=> Khong the tinh UCLN/BCNN vi ca hai so deu bang 0.\n");
                    break;
                }
                int aa = a, bb = b;
                while (bb != 0) {
                    int t = aa % bb;
                    aa = bb;
                    bb = t;
                }
                int ucln = aa;
                long long bcnn = 0;
                if (ucln != 0)
                    bcnn = (long long)(a / ucln) * b;
                printf("\n=> Uoc chung lon nhat (UCLN) cua %d va %d la: %d", x, y, ucln);
                printf("\n=> Boi chung nho nhat (BCNN) cua %d va %d la: %lld\n", x, y, bcnn);
            } break;
             case 3: {
                int start, end;
                printf("\nNhap gio bat dau (12 - 23): ");
                scanf("%d", &start);
                printf("Nhap gio ket thuc (12 - 23): ");
                scanf("%d", &end);
                if (start < 12 || start > 23 || end < 12 || end > 23 || start >= end) {
                    printf("\n>>> Gio khong hop le!");
                    printf("\nQuán mo cua tu 12h den 23h va gio ket thuc phai lon hon gio bat dau.\n");
                    break;
                }
                int gioHat = end - start;
                float tongTien = 0;
                if (gioHat <= 3) {
                    tongTien = gioHat * 150000;
                } else {
                    tongTien = 3 * 150000 + (gioHat - 3) * (150000 * 0.7);
                }
                if (start >= 14 && start <= 17) {
                    tongTien *= 0.9;
                }
                printf("\nSo gio hat: %d", gioHat);
                printf("\n=> Tong tien can thanh toan: %.0f VND\n", tongTien);
            } break;
            case 4:{
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
                if(sodien < 50)  { tiendien += sodien*1678; sodien<50; }
                tiendien += sodien*1678;
                printf("So tien dien can dong: %.0f VND\n", tiendien);
                break;
                printf("\tnhap vao so dien tieu thu: ");
                }break;
            case 5:{
                printf("\nnhap vao so tien can doi: ");
                }break;
            case 6:{
                printf("\nNhap vao so tien vay: ");
                }break;
            case 7:{
                printf("\nNhap vao gia tri xe can mua: ");
                }break;
            case 8:{
                printf("\nNhap vao so luong sinh vien: ");
                }break;
            case 9:{
                printf("\nChao mung den voi game POLY-LOTT!");
            }break;
            case 10:{
                printf("\n\nNhap vao phan so: ");
                }break;
            case 0:{
                printf("\nHen gap lai!!!");
                exit(0);
                }break;
            default:{
                printf("\n\nNhap k hop le. Moi nhap lai: ");
                }break;
        }
    }
    while(luachon != 0);
    return 0;
}

