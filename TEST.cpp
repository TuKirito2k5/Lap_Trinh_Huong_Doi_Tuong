#include <iostream>
using namespace std;

class HinhChuNhat {
private:
    // Đóng gói dữ liệu (Encapsulation)
    int dai;
    int rong;

public:
    // Constructor mặc định khởi tạo giá trị ban đầu tránh "giá trị rác"
    HinhChuNhat() {
        dai = 0;
        rong = 0;
    }

    // --- Các hàm Setter ---
    void setDai(int d) {
        if (d > 0) {
            dai = d;
        } else {
            dai = 1; // Đảm bảo chiều dài luôn hợp lệ
        }
    }

    void setRong(int r) {
        if (r > 0) {
            rong = r;
        } else {
            rong = 1; // Đảm bảo chiều rộng luôn hợp lệ
        }
    }

    // --- Các hàm Getter ---
    int getDai() {
        return dai;
    }

    int getRong() {
        return rong;
    }

    // --- Các phương thức xử lý yêu cầu ---
    
    // Phương thức vẽ hình chữ nhật
    void VE() {
        cout << "\n--- Hinh Chu Nhat (" << dai << " x " << rong << ") ---" << endl;
        // Vòng lặp ngoài duyệt theo chiều rộng (số dòng)
        for (int i = 0; i < rong; i++) {
            // Vòng lặp trong duyệt theo chiều dài (số cột)
            for (int j = 0; j < dai; j++) {
                cout << "* ";
            }
            cout << endl; // Xuống dòng khi hết 1 hàng
        }
    }

    // Phương thức in diện tích
    void DIENTICH() {
        cout << "Dien tich hinh chu nhat la: " << dai * rong << endl;
    }

    // Phương thức in chu vi
    void CHUVI() {
        cout << "Chu vi hinh chu nhat la: " << 2 * (dai + rong) << endl;
    }
};

int main() {
    HinhChuNhat hcn; // Khai báo 01 đối tượng hình chữ nhật
    int nhapDai, nhapRong;

    // 1. Nhập liệu từ người dùng
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> nhapDai;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> nhapRong;

    // 2. Sử dụng Setter để gán giá trị đã nhập vào object
    hcn.setDai(nhapDai);
    hcn.setRong(nhapRong);

    // 3. Gọi các phương thức để hiển thị kết quả
    hcn.VE();
    hcn.DIENTICH();
    hcn.CHUVI();

    return 0;
}