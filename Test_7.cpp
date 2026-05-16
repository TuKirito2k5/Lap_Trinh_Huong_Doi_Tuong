#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
struct SinhVien {
    string hoTen;
    float diem1, diem2, diem3;
    float tongDiem;
};
int main()
{
    int n;
    SinhVien  ds[100];
    cout << "Nhap so luong sinh vien: \n" ;
    do
    {
        cin >> n;
        if (n < 0 || n> 100 ) 
        cout << " So luong sinh vien khong hop le. Hay nhap lai: \n";
    }
    while (n < 0 || n >100);
for(int i = 0; i < n ; i++)
{
    cout << "Nhap thong tin sinh vien thu " << i + 1 << " ....\n"  ;
    cin.ignore(); 
    cout << "Ho va ten: ";
    getline(cin, ds[i].hoTen);
do
{
    cout << " Diem mon thu 1 : \n ";
    cin >> ds[i].diem1;
    if (ds[i].diem1 < 0 || ds[i].diem1 > 10 )
    cout << "Diem khong hop le. Hay nhap lai: \n";

}
while (ds[i].diem1 < 0 || ds[i].diem1 > 10);
do
{
    cout << " Diem mon thu 2 : \n ";
    cin >> ds[i].diem2;
    if (ds[i].diem2 < 0 || ds[i].diem2 > 10 )
    cout << "Diem khong hop le. Hay nhap lai: \n";

}
while (ds[i].diem2 < 0 || ds[i].diem2 > 10);
do
{
    cout << " Diem mon thu 3 : \n ";
    cin >> ds[i].diem3;
    if (ds[i].diem3 < 0 || ds[i].diem3 > 10 )
    cout << "Diem khong hop le. Hay nhap lai: \n";

}
while (ds[i].diem3 < 0 || ds[i].diem3 > 10);
ds[i].tongDiem = ds[i].diem1 + ds[i].diem2 + ds[i].diem3;
}
for (int i = 0 ; i < n ; i++)
{
 for(int j = 0 ; j <n ; j++)
 {
    if (ds[j].tongDiem < ds[i].tongDiem)
    {
        swap (ds[j] , ds[i]);
    }
 }
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
