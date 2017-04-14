// A variant of Stefan Reuther's submission, conforming to a strict
// interpretation of the rules. 
//
// 16 characters of line noise in a row is still impressive.
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2};
    int i = 0;
    a[i++]--,[=](){}();
    // 1234567890123456
    //          1111111
    cout << "(" << a[0] << ", " << a[1] << ")" << endl;
    cout << i << endl;
    return 0;
}
