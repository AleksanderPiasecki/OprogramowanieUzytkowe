#include <iostream>

using std::cout;
using std::endl;

int policz(int a, int b) {
    return (a + b) * (a - b);
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "W pierwszym branchu; 2+3=" << policz(2, 3) << endl;
    return 0;
}