// Submitted by Stefan Reuther <stefan.news@arcor.de>
// 
// This is a bit of an abuse of the rules:
// 1) The submitter maintains that [] is not a "lambda operator", but
// "other syntax", so he doesn't violate the "each operator only once"
// rule
// 2) He does use the function call operator twice, but stops counting
// just before the second use.
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2};
    int i = 0;
    a[i++]--,[=](){[&](){}();}();
    // 12345678901234567890123
    //          11111111112222
    cout << "(" << a[0] << ", " << a[1] << ")" << endl;
    cout << i << endl;
    return 0;
}
