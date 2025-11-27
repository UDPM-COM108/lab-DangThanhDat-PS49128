#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap do dai mang A: ");
    scanf("%d",&n);
    int a[n]; 
    for (int i=0;i<n;i++){
        printf("Nhap phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n--- Danh sach Mang A ---\n");
    for (int i=0;i<n;i++){
        printf("A[%d]: %d\n", i, a[i]); 
    }
    int S=0, dem=0;
    for (int i=0;i<n;i++){
        if(a[i]%3==0){
            S += a[i];
            dem++;
        }
    }
    if(dem>0){
        float TB = (float)S/dem;
        printf("\nTrung binh cac so chia het cho 3: %.2f\n",TB);
    }else{
        printf("\nKhong co so nao chia het cho 3 trong mang A!\n");
    }ww
    int m;
    printf("\n--- PHAN 2: Tim Max/Min ---\n");
    printf("Nhap do dai mang B: ");
    scanf("%d",&m);
    int b[m];
    for(int j=0;j<m;j++){
        printf("Nhap phan tu b[%d]: ",j);
        scanf("%d",&b[j]); 
    } 
    printf("\n--- Danh sach Mang B ---\n");
    for(int j=0;j<m;j++){
        printf("B[%d]: %d\n", j, b[j]); 
    }
    int max = b[0];
    int min = b[0]; 
    for (int j = 1; j < m; j++){
        if (b[j] > max) max = b[j];
        if (b[j] < min) min = b[j];
    }
    printf("\nGia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    return 0;
}