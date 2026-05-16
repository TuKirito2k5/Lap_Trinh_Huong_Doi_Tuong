#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


struct SinhVien {
    string hoTen;
    float diem1, diem2, diem3;
    float tongDiem;
};

float nhapDiemHopLe(string tenMon) {
    float diem;
    do {
        cout << "Diem " << tenMon << " (0 - 10): ";
        cin >> diem;
        if (diem < 0 || diem > 10) {
            cout << ">> Loi: Diem phai nam trong khoang tu 0 den 10. Vui long nhap lai!\n";
        }
    } while (diem < 0 || diem > 10);
    return diem;
}

int main() {
    int n;
    SinhVien ds[100];

    do {
        cout << "Nhap so luong sinh vien (1 - 100): ";
        cin >> n;
        if (n <= 0 || n > 100) {
            cout << "So luong khong hop le. Vui long nhap lai!\n";
        }
    } while (n <= 0 || n > 100);

  
    for (int i = 0; i < n; i++) {
        cout << "\n--- Nhap thong tin sinh vien thu " << i + 1 << " ---\n";
        
        cin.ignore(); 
        
        cout << "Ho va ten: ";
        getline(cin, ds[i].hoTen);
        
       
        ds[i].diem1 = nhapDiemHopLe("mon 1");
        ds[i].diem2 = nhapDiemHopLe("mon 2");
        ds[i].diem3 = nhapDiemHopLe("mon 3");

        
        ds[i].tongDiem = ds[i].diem1 + ds[i].diem2 + ds[i].diem3;
    }

    
    cout << "\n======================== DANH SACH SINH VIEN ========================\n";
    cout << left << setw(25) << "Ho va ten"
         << setw(10) << "Mon 1"
         << setw(10) << "Mon 2"
         << setw(10) << "Mon 3"
         << setw(12) << "Tong diem" << endl;
    cout << "---------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(25) << ds[i].hoTen
             << setw(10) << ds[i].diem1
             << setw(10) << ds[i].diem2
             << setw(10) << ds[i].diem3
             << setw(12) << ds[i].tongDiem << endl;
    }

    return 0;
}