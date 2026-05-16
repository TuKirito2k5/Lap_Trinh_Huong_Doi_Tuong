#include <iostream>
#include <string>

using namespace std;

class TaiKhoan {
private:
    string ten;
    long long soDu;

public:
    TaiKhoan() {
        ten = "Khach Hang";
        soDu = 50000; 
    }

    void setTen(string t) {
        ten = t;
    }

    void setSoDu(long long tien) {
        if (tien >= 0) {
            soDu = tien;
        } else {
            cout << "So du khong duoc la so am!" << endl;
        }
    }

    string getTen() {
        return ten;
    }

    long long getSoDu() {
        return soDu;
    }

    void napTien(long long tienNap) {
        if (tienNap > 0) {
            soDu += tienNap;
            cout << "=> Giao dich thanh cong! Da nap " << tienNap << " VND vao tai khoan." << endl;
        } else {
            cout << "=> Loi: So tien nap phai lon hon 0!" << endl;
        }
    }

    void rutTien(long long tienRut) {
        if (tienRut <= 0) {
            cout << "=> Loi: So tien rut phai lon hon 0!" << endl;
        } else if (tienRut > soDu) {
            cout << "=> Loi: So du hien tai khong du de thuc hien giao dich nay!" << endl;
        } else {
            soDu -= tienRut;
            cout << "=> Giao dich thanh cong! Da rut " << tienRut << " VND tu tai khoan." << endl;
        }
    }

    void hienThi() {
        cout << "\n===============================" << endl;
        cout << "   THONG TIN TAI KHOAN" << endl;
        cout << "===============================" << endl;
        cout << "Ten chu tai khoan: " << ten << endl;
        cout << "So du hien tai   : " << soDu << " VND" << endl;
        cout << "===============================\n" << endl;
    }
};

int main() {
    TaiKhoan tk;
    string nhapTen;
    int luaChon;
    long long soTien;

    cout << "--- HE THONG QUAN LY NGAN HANG ---" << endl;
    cout << "Nhap ten chu tai khoan moi: ";
    getline(cin, nhapTen);
    tk.setTen(nhapTen);
    tk.hienThi();
    do {
        cout << "\n--- MENU GIAO DICH ---" << endl;
        cout << "1: Nap tien" << endl;
        cout << "2: Rut tien" << endl;
        cout << "0: Ket thuc giao dich" << endl;
        cout << "Moi ban chon (0, 1, 2): ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                cout << "Nhap so tien muon nap (VND): ";
                cin >> soTien;
                tk.napTien(soTien);
                cout << ">> So du hien tai: " << tk.getSoDu() << " VND <<" << endl;
                break;
            
            case 2:
                cout << "Nhap so tien muon rut (VND): ";
                cin >> soTien;
                tk.rutTien(soTien);
                cout << ">> So du hien tai: " << tk.getSoDu() << " VND <<" << endl;
                break;
            
            case 0:
                cout << "\nCam on quy khach " << tk.getTen() << " da su dung dich vu cua ngan hang. Xin chao tam biet!" << endl;
                break;
                
            default:
                cout << "Lua chon khong hop le. Vui long chon lai!" << endl;
        }
    } while (luaChon != 0);

    return 0;
}