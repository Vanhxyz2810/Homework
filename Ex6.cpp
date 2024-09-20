#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double so_duong = 1.5;
    double so_bo = 1.0;
    double so_bot = 2.75;
    double so_banh_voi_ct_tren = 48.0;

    int so_luong_banh;
    cout << "Nhap so luong banh ban muon lam: ";
    cin >> so_luong_banh;

    double so_duong_cua_1_banh = so_duong / so_banh_voi_ct_tren;
    double so_bo_cua_1_banh = so_bo / so_banh_voi_ct_tren;
    double so_bot_cua_1_banh = so_bot / so_banh_voi_ct_tren;

    double so_duong_saukhi_lam_banh = so_duong_cua_1_banh * so_luong_banh;
    double so_bo_saukhi_lam_banh = so_bo_cua_1_banh * so_luong_banh;
    double so_bot_saukhi_lam_banh = so_bot_cua_1_banh * so_luong_banh;

    cout << fixed << setprecision(1);
    cout << "So duong can dung: " << so_duong_saukhi_lam_banh << " coc" << endl;
    cout << "So bo can dung: " << so_bo_saukhi_lam_banh << " coc" << endl;
    cout << "So bot can dung: " << so_bot_saukhi_lam_banh << " coc" << endl;

    return 0;
}
