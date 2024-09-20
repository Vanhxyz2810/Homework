#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int so_hocsinh_nam, so_hocsinh_nu;
    cout << "Nhap so hoc sinh nam: " << endl;
    cin >> so_hocsinh_nam;
    cout << "Nhap so hoc sinh nu: " << endl;
    cin >> so_hocsinh_nu;

    int tong_hocsinh = so_hocsinh_nam + so_hocsinh_nu;
    
    // phan tram nam va nu
    double phan_tram_nam = (double)so_hocsinh_nam / tong_hocsinh * 100;
    double phan_tram_nu = (double)so_hocsinh_nu / tong_hocsinh * 100;

    cout << fixed << setprecision(2);
    cout << "Phan tram hoc sinh nam: " << phan_tram_nam << "%" << endl;
    cout << "Phan tram hoc sinh nu: " << phan_tram_nu << "%" << endl;

    return 0;
    
    
    
}

