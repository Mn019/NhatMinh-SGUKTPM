#include <iostream>
#include <cassert>
using namespace std;

int f2(int x) {
    if (x < 10) return 2 * x;
    else if (x < 2) return -x;
    else return 2 * x;
}

void test_f2() {
    assert(f2(1) == 2);     // Nhánh đầu
    assert(f2(2) == 4);     // Nhánh đầu
    assert(f2(10) == 20);   // Nhánh cuối
    assert(f2(15) == 30);   // Nhánh cuối
    cout << "Hàm f2 có nhánh không bao giờ được thực thi (x < 2 sau x < 10)!" << endl;
}

int main() {
    test_f2();
    return 0;
}