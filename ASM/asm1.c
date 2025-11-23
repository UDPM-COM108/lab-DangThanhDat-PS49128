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
                printf("\nthap vao so nguyen: ");
                }break;
            case 2:{
               printf("\ntihap vao 2 so nguyen: ");
                }break;
            case 3:{
                printf("\nthap vao so gio hat: ");
                }break;

            case 4:{
                printf("\thap vao so lah tieu thu: ");
                }break;
            case 5:{
                printf("\nthap vao so tien can doi: ");
                }break;
            case 6:{
                printf("nhap vao so tien vay: ");
                }break;
            case 7:{
                printf("\n\nNhap vao gia tri xe can mua: ");
                }break;
            case 8:{
                printf("\n\nNhap vao so luong sinh vien: ");
                }break;
            case 9:{
                printf("\nchao mung den voi game POLY-LOTT!");
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
