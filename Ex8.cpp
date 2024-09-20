#include <iostream>

using namespace std;


int main (){
    double trong_luong_pallet_without_obj;
    double trong_luong_pallet_with_obj;
    cout << "Nhap trong luong pallet khong co vat: ";
    cin >> trong_luong_pallet_without_obj;
    cout << "Nhap trong luong pallet co vat: ";
    cin >> trong_luong_pallet_with_obj;
    double trong_luong_vat = trong_luong_pallet_with_obj - trong_luong_pallet_without_obj;
    int so_luong_vat = trong_luong_vat / 12.5;
    cout << "So luong vat: " << so_luong_vat << endl;
    return 0;
}