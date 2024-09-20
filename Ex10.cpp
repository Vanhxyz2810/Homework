#include <iostream>
using namespace std;

int main() {
    double replacementCost;
    const double INSURANCE_PERCENTAGE = 0.80;

    cout << "Nhập chi phí thay thế của tòa nhà: ";
    cin >> replacementCost;

    double minimumInsurance = replacementCost * INSURANCE_PERCENTAGE;

    cout << "Số tiền bảo hiểm tối thiểu bạn nên mua là: " << minimumInsurance << endl;

    return 0;
}
