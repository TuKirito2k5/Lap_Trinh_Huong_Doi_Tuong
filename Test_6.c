#include <stdio.h>
#include <string.h> 

typedef struct {
    char hoTen[50];
    float diem1, diem2, diem3;
    float tongDiem;
} SinhVien;

float nhapDiemHopLe(const char* tenMon) {
    float diem;
    do {
        printf("Diem %s (0 - 10): ", tenMon);
        scanf("%f", &diem);
        if (diem < 0 || diem > 10) {
            printf(">> Loi: Diem phai nam trong khoang tu 0 den 10. Vui long nhap lai!\n");
        }
    } while (diem < 0 || diem > 10);
    return diem;
}

void xoaBoDem() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int n;
    SinhVien ds[100];

    do {
        printf("Nhap so luong sinh vien (1 - 100): ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("So luong khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);
        
        xoaBoDem(); 
        printf("Ho va ten: ");
        fgets(ds[i].hoTen, sizeof(ds[i].hoTen), stdin);
        ds[i].hoTen[strcspn(ds[i].hoTen, "\n")] = '\0';
        ds[i].diem1 = nhapDiemHopLe("mon 1");
        ds[i].diem2 = nhapDiemHopLe("mon 2");
        ds[i].diem3 = nhapDiemHopLe("mon 3");

        ds[i].tongDiem = ds[i].diem1 + ds[i].diem2 + ds[i].diem3;
    }

    
    printf("\n======================== DANH SACH SINH VIEN ========================\n");
    printf("%-25s%-10s%-10s%-10s%-12s\n", "Ho va ten", "Mon 1", "Mon 2", "Mon 3", "Tong diem");
    printf("---------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-25s%-10.2f%-10.2f%-10.2f%-12.2f\n", 
               ds[i].hoTen, ds[i].diem1, ds[i].diem2, ds[i].diem3, ds[i].tongDiem);
    }

    return 0;
}