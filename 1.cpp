#include <iostream>
using namespace std;
int main () {
    int a = 50 , b = 0;
    while (a <= 100) {
        b += a;
        ++a;
        cout << b << endl;
    }
    return 0;
}
