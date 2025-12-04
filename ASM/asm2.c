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
                printf("\nnhap vao so nguyen: ");
                
            }break;
            case 2:{
               printf("\nnhap vao 2 so nguyen: ");
                }break;
            case 3:{
                printf("\nnhap vao so gio hat: ");
                }break;

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
                if(sodien < 50)  { tiendien += (sodien-50)*1734; sodien=50; }
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

