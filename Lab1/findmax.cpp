#include <iostream>
#include <cassert>
using namespace std;

int findMax(int num1, int num2, int num3) {
    int max = 0;
    if ((num1 > num2) && (num1 > num3)) max = num1;
    if ((num2 > num1) && (num2 > num3)) max = num2;
    if ((num3 > num1) && (num3 > num2)) max = num3;
    return max;
}

void test_findMax() {
    assert(findMax(5, 3, 2) == 5);   // OK
    assert(findMax(2, 6, 4) == 6);   // OK
    assert(findMax(1, 2, 9) == 9);   // OK
    assert(findMax(5, 5, 5) == 0);   // Sai
    assert(findMax(7, 7, 3) == 0);   // Sai
    cout << "Hàm findMax có lỗi logic khi các số bằng nhau hoặc không vượt trội!" << endl;
}

int main() {
    test_findMax();
    return 0;
}