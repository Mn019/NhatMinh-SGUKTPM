#include <iostream>
#include <cassert>
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else return -x;
}

void test_f1() {
    assert(f1(11) == 22);   // Kiểm tra nhánh x > 10
    assert(f1(10) == -10);  // Kiểm tra biên x = 10
    assert(f1(0) == 0);     // Kiểm tra x = 0
    assert(f1(-5) == 5);    // Kiểm tra x âm
    cout << "Tất cả test f1 đều đúng!" << endl;
}

int main() {
    test_f1();
    return 0;
}