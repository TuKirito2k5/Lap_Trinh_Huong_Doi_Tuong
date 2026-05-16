#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int n, m;
    
    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;

    int a[100][100]; 

    cout << "\n--- Nhap cac phan tu cua mang ---\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "\n--- Mang vua nhap ---\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(5) << a[i][j]; 
        }
        cout << "\n";
    }

    int max_all = a[0][0], min_all = a[0][0];
    int max_r = 0, max_c = 0, min_r = 0, min_c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max_all) {
                max_all = a[i][j];
                max_r = i;
                max_c = j;
            }
            if (a[i][j] < min_all) {
                min_all = a[i][j];
                min_r = i;
                min_c = j;
            }
        }
    }
    cout << "\n--- Thong ke toan mang ---\n";
    cout << "Max toan mang = " << max_all << " tai vi tri [" << max_r << "][" << max_c << "]\n";
    cout << "Min toan mang = " << min_all << " tai vi tri [" << min_r << "][" << min_c << "]\n";

    cout << "\n--- Thong ke tung hang ---\n";
    for (int i = 0; i < n; i++) {
        int max_row = a[i][0], min_row = a[i][0];
        int mr_c = 0, minr_c = 0; 

        for (int j = 1; j < m; j++) { 
            if (a[i][j] > max_row) {
                max_row = a[i][j];
                mr_c = j;
            }
            if (a[i][j] < min_row) {
                min_row = a[i][j];
                minr_c = j;
            }
        }
        cout << "Hang " << i << ": Max = " << max_row << " (cot " << mr_c << "), Min = " << min_row << " (cot " << minr_c << ")\n";
    }

    return 0;
}