#include <iostream>
using namespace std;

int main() {
    int soLuongBanh;
    const int soLuongBanhTrongTui = 30;
    const int soLuongKhauPhan = 10;
    const int caloriesMoiKhauPhan = 300;
    
    int caloriesMoiChiecBanh = (caloriesMoiKhauPhan * soLuongKhauPhan) / soLuongBanhTrongTui;
    
    cout << "Nhập số lượng bánh mà bạn đã ăn: ";
    cin >> soLuongBanh;
    
    int tongCalories = soLuongBanh * caloriesMoiChiecBanh;
    
    cout << "Tổng số calories đã tiêu thụ: " << tongCalories << " calories" << endl;
    
    return 0;
}

