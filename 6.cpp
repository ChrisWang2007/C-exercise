#include <iostream>
using namespace std;
int main () {
    int a , b;
    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    for (; a < b; ++a) {
        cout << a << endl;
    }
    for (; b <= a; ++b) {
        cout << b << endl;
    }
    return 0;
}
