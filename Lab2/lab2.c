//BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +-2 SỐ 
/#include <studio.h>
int main() {
    int a, b;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("Tong cua %d va %d la: %d\n", a, b, a + b);
    printf("Hieu cua %d va %d la: %d\n", a, b, a - b);
    return 0;
}
//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH DIỆN TÍCH HÌNH CHỮ NHẬT
#include <stdio.h>
int main() {
    float chieudau, chieu rong;
    printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &chieudai, &chieurong);
    dientich = chieudai * chieurong;
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);
    return 0;
}
//BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH DIỆN TÍCH HÌNH TRÒN
/#include <stdio.h>
#define PI 3.14159
int main() {
    float bankinh, dientich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    dientich = PI * bankinh * bankinh;
    printf("Dien tich hinh tron la: %.2f\n", dientich);
    return 0;
}
//BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
#include <stdio.h>
int main() {
    float diemToan, diemLy, diemHoa, diemTB;
    printf("Nhap diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &diemToan, &diemLy, &diemHoa);
    diemTB = (diemToan*3 + diemLy*2 + diemHoa) / 6;
    printf("Diem trung binh la: %.2f\n", diemTB);
    return 0;
}
//BAI 5: TÍNH CHU VI VÀ DIỆN TÍCH TAM GIÁC VUÔNG
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, chuvi, dientich;
    printf("Nhap do dai 2 canh ke cua tam giac vuong: ");
    scanf("%f %f", &a, &b);
    c = sqrt(a*a + b*b);
    chuvi = a + b + c;
    dientich = (a * b) / 2;
    printf("Chu vi tam giac vuong la: %.2f\n", chuvi);
    printf("Dien tich tam giac vuong la: %.2f\n", dientich);
    return 0;
}   
