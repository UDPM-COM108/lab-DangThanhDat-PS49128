#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    //BÀI 1:CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI NHẬP VÀO TỪ BÀN PHÍM
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    int nguyen_am = 0, phu_am = 0;
    for(int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                nguyen_am++;
            else
                phu_am++;
        }
    }
    printf("So nguyen am: %d\n", nguyen_am);
    printf("So phu am: %d\n\n", phu_am);
    //BÀI 2:CHƯƠNG TRÌNH ĐĂNG NHẬP VỚI USERNAME VÀ PASSWORD CỐ ĐỊNH
    char user[50], pass[50];
    printf("Nhap username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = 0;
    printf("Nhap password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;
    if(strcmp(user, "Dang Thanh Dat") == 0 && strcmp(pass, "12345678") == 0)
        printf("Dang nhap thanh cong!\n\n");
    else
        printf("Dang nhap KHONG thanh cong!\n\n");
    //BÀI 3:CHƯƠNG TRÌNH TÌM CÁC KÝ TỰ XUẤT HIỆN NHIỀU HƠN 2 LẦN TRONG CHUỖI NHẬP VÀO TỪ BÀN PHÍM
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    int freq[256] = {0};
    for(int i = 0; i < strlen(s); i++) {
        unsigned char c = s[i];
        freq[c]++;
    }
    printf("Cac ky tu xuat hien > 2 lan: ");
    int found = 0;
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 2 && i != ' ' && i != '\n') {
            printf("%c ", i);
            found = 1;
        }
    }
    if(!found) printf("Khong co ky tu nao.");
    return 0;
}
