#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string ten_phim;
    int ticket_adult = 10;
    int ticket_child = 6;
    int so_luong_nguoi_lon;
    int so_luong_tre_em;
    double tax = 0.2;
    cout << "Nhap ten phim: ";
    getline(cin, ten_phim);
    cout << "Nhap so luong ve nguoi lon: ";
    cin >> so_luong_nguoi_lon;
    cout << "Nhap so luong ve tre em: ";
    cin >> so_luong_tre_em;

    double total_money = (ticket_adult * so_luong_nguoi_lon) + (ticket_child * so_luong_tre_em);
    double money_of_cinema = total_money * tax;
    double money_of_hollywood = total_money - money_of_cinema;
    cout << "Ten phim: " << ten_phim << endl;
    cout << "So luong ve nguoi lon: " << so_luong_nguoi_lon << endl;
    cout << "So luong ve tre em: " << so_luong_tre_em << endl;
    cout << "So tien cua Cinema la: " << money_of_cinema << "$" << endl;
    cout << "So tien cua Hollywood la: " << money_of_hollywood << "$" << endl;
    return 0;
}
