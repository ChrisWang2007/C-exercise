#include <iostream>
using namespace std;
int  main () {
    int a,b,c;
    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    while (a > b){
        cout << a << endl;
        --a;
    }
    while (b > a) {
        cout << b << endl;
        --b;
    }
    return 0;
}
