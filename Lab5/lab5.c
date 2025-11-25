#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap 3 so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    printf("So lon nhat la: %d\n", max);
    int nam;
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
        printf("%d la nam nhuan.\n", nam);
    else
        printf("%d khong phai la nam nhuan.\n", nam);
    int x, y, temp;
    printf("Nhap 2 so x va y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("Sau khi hoan vi: x = %d, y = %d\n", x, y);
    return 0;
}
