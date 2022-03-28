#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "hello, c++";
    cout << greeting;
    cout << "\n";     // 换行符
    string greeting2 = "hello, \
                       c++";
    cout << greeting2;
    return 0;
}