#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

int f3(int x) {
    if (log(x * x * cos(x)) < 3 * x)
        return 2 * x;
    else
        return 2 * x;
}

void test_f3() {
    // Trường hợp an toàn
    assert(f3(1) == 2);
    assert(f3(2) == 4);

    // Trường hợp nguy hiểm: cần kiểm tra thủ công
    try {
        f3(10); // cos(10) < 0 → log âm → lỗi
        cout << "f3(10) không gây lỗi (bất ngờ)!" << endl;
    } catch (...) {
        cout << "f3(10) gây lỗi như mong đợi!" << endl;
    }

    cout << "Kiểm thử f3 hoàn tất!" << endl;
}

int main() {
    test_f3();
    return 0;
}