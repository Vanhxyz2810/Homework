#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double BaiKT1, BaiKT2, BaiKT3, BaiKT4, BaiKT5;
    cout << "Nhap diem bai kiem tra 1: " << endl;
    cin >> BaiKT1;
    cout << "Nhap diem bai kiem tra 2: " << endl;
    cin >> BaiKT2;
    cout << "Nhap diem bai kiem tra 3: " << endl;
    cin >> BaiKT3;
    cout << "Nhap diem bai kiem tra 4: " << endl;
    cin >> BaiKT4;
    cout << "Nhap diem bai kiem tra 5: " << endl;
    cin >> BaiKT5;

    double diem_trung_binh = (BaiKT1 + BaiKT2 + BaiKT3 + BaiKT4 + BaiKT5) / 5;
    cout << fixed << setprecision(1);
    cout << "Diem trung binh la: " << diem_trung_binh << endl;
}

