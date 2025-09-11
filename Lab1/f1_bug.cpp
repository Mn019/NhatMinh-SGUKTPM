#include <iostream>
#include <cassert>
using namespace std;

int f1_bug(int x) {
    if (x > 10) return 2 * x;
    else if (x > 0) return -x;
    else return 2;
}

void test_f1_bug() {
    assert(f1_bug(11) == 22);   // Đúng
    assert(f1_bug(5) == -5);    // Đúng
    assert(f1_bug(0) != 0);     // Sai: trả về 2 thay vì 0
    assert(f1_bug(-3) != 3);    // Sai: trả về 2 thay vì 3
    cout << "Hàm f1_bug có lỗi logic ở x = 0 và x < 0!" << endl;
}

int main() {
    test_f1_bug();
    return 0;
}