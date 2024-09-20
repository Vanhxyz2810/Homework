#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double A = 15;
    double B = 12;
    double C = 9;
    int soVeA, soVeB, soVeC;
    cout << "So ve ban muon mua cua ghe hang A la: " << endl;
    cin >> soVeA;
    cout << "So ve ban muon mua cua ghe hang B la: "  << endl;
    cin >> soVeB;
    cout << "So ve ban muon mua cua ghe hang C la: "  << endl;
    cin >> soVeC;
    
    double tong_tien = (soVeA * A) + (soVeB * B) + (soVeC * C);
    cout << fixed << setprecision(2);
    cout << "Tong so tien la: " <<"$" << tong_tien << endl;
}
