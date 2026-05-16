#include <iostream>
using namespace std;

class HinhChuNhat {
private:
   
    int dai;
    int rong;

public:
    
    HinhChuNhat() {
        dai = 0;
        rong = 0;
    }

   
    void setDai(int d) {
        if (d > 0) {
            dai = d;
        } else {
            dai = 1; 
        }
    }

    void setRong(int r) {
        if (r > 0) {
            rong = r;
        } else {
            rong = 1; 
        }
    }

    int getDai() {
        return dai;
    }

    int getRong() {
        return rong;
    }

    void VE() {
        cout << "\n--- Hinh Chu Nhat (" << dai << " x " << rong << ") ---" << endl;
       
        for (int i = 0; i < rong; i++) {
           
            for (int j = 0; j < dai; j++) {
                cout << "* ";
            }
            cout << endl; // Xuống dòng khi hết 1 hàng
        }
    }

    void DIENTICH() {
        cout << "Dien tich hinh chu nhat la: " << dai * rong << endl;
    }

    void CHUVI() {
        cout << "Chu vi hinh chu nhat la: " << 2 * (dai + rong) << endl;
    }
};

int main() {
    HinhChuNhat hcn;
    int nhapDai, nhapRong;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> nhapDai;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> nhapRong;
    hcn.setDai(nhapDai);
    hcn.setRong(nhapRong);
    hcn.VE();
    hcn.DIENTICH();
    hcn.CHUVI();
    return 0;
}