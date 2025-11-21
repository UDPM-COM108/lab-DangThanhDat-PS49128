#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("\n===== MENU TUY CHON =====\n");
        printf("1. Tinh trung binh tong cac so tu nhien chia het cho 2 (tu min den max)\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat chuong trinh\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                int min, max;
                float tong = 0, bienDem = 0;
                printf("Nhap min: ");
                scanf("%d", &min);
                printf("Nhap max: ");
                scanf("%d", &max);
                if (min > max) {
                    printf("Min phai nho hon hoac bang Max!\n");
                    break;
                }
                for(int i = min; i <= max; i++){
                    if(i % 2 == 0){
                        tong += i;
                        bienDem++;
                    }
                }
                if(bienDem == 0){
                    printf("Khong co so nao chia het cho 2 trong khoang nay!\n");
                } else {
                    float trungBinh = tong / bienDem;
                    printf("Trung binh cac so chia het cho 2: %.2f\n", trungBinh);
                }
                break;
            }
            case 2: {
                int x;
                printf("Nhap x: ");
                scanf("%d", &x);
                if(x < 2){
                    printf("%d khong phai so nguyen to!\n", x);
                    break;
                }  
                int laSoNguyenTo = 1;
                int limit = (int)sqrt(x); 
                for(int i = 2; i <= limit; i++){
                    if(x % i == 0){
                        laSoNguyenTo = 0; 
                        break;
                    }
                }
                if(laSoNguyenTo){
                    printf("%d la so nguyen to!\n", x);
                } else {
                    printf("%d khong phai so nguyen to!\n", x);
                }
                break;
            }
            case 3: {
                int x;
                printf("Nhap x: ");
                scanf("%d", &x);
                if (x < 0) {
                    printf("%d khong phai so chinh phuong!\n", x);
                    break;
                }
                int canBacHai = (int)sqrt(x);  
                if(canBacHai * canBacHai == x){
                    printf("%d la so chinh phuong!\n", x);
                } else {
                    printf("%d khong phai so chinh phuong!\n", x);
                }
                break;
            }
            case 0:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 0);
    return 0;
}