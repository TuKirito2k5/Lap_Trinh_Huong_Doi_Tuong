#include <iostream>

using namespace std;

class DanhSachDiem {
private:
    double* diem; 
    int soLuong;  

public:
    DanhSachDiem(int n) {
        soLuong = n;
        diem = new double[soLuong];
        
        cout << "--- NHAP DANH SACH DIEM ---" << endl;
        for (int i = 0; i < soLuong; i++) {
            do {
                cout << "Nhap diem thu " << i + 1 << " (tu 0 den 10): ";
                cin >> diem[i];
                if (diem[i] < 0 || diem[i] > 10) {
                    cout << "=> Loi: Diem khong hop le! Vui long nhap lai trong khoang 0 - 10.\n";
                }
            } while (diem[i] < 0 || diem[i] > 10);
        }
    }

    ~DanhSachDiem() {
        if (diem != nullptr) {
            delete[] diem; // Giải phóng vùng nhớ
            cout << "\n[He thong] Da giai phong bo nho cua mang diem." << endl;
        }
    }

    double tinhTrungBinh() {
        if (soLuong == 0) return 0.0;
        
        double tong = 0;
        for (int i = 0; i < soLuong; i++) {
            tong += diem[i];
        }
        return tong / soLuong;
    }

    void xuatDanhSach() {
        if (soLuong == 0) {
            cout << "Danh sach trong!" << endl;
            return;
        }
        
        cout << "\n--- DANH SACH DIEM ---" << endl;
        for (int i = 0; i < soLuong; i++) {
            cout << diem[i] << "  ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    do {
        cout << "Nhap so luong mon hoc (phai lon hon 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "=> Loi: So luong mon hoc khong duoc nho hon hoac bang 0! Vui long nhap lai.\n";
        }
    } while (n <= 0);

    DanhSachDiem ds(n); 

    ds.xuatDanhSach();
    cout << "=> Diem trung binh la: " << ds.tinhTrungBinh() << endl;

    return 0;
}