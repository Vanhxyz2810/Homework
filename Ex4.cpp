#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
    string ten_muat1, ten_muat2, ten_muat3;
    double luong_muat1, luong_muat2, luong_muat3;
    cout << "Nhap ten thang thu nhat: " << endl;
    cin >> ten_muat1;
    cout << "Nhap luong mua thang thu nhat: " << endl;
    cin >> luong_muat1;
    cout << "Nhap ten thang thu hai: " << endl;
    cin >> ten_muat2;
    cout << "Nhap luong mua thang thu hai: " << endl;
    cin >> luong_muat2; 
    cout << "Nhap ten thang thu ba: " << endl;
    cin >> ten_muat3;
    cout << "Nhap luong mua thang thu ba: " << endl;
    cin >> luong_muat3;

    double luong_mua_tbinh_3m = (luong_muat1 + luong_muat2 + luong_muat3) / 3;
    cout << fixed << setprecision(2);
    cout << "Luong mua trung binh cua 3 thang " << ten_muat1 << ", " 
                                              << ten_muat2 << ", " 
                                              << ten_muat3 << " la: " 
                                              << luong_mua_tbinh_3m << " inches." << endl;

    return 0;
}
