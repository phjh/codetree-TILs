#include <iostream>
using namespace std;
void Calculate(int& a, int& b) {
    if (a > b) {
        a += a;
        b += 10;
    }
    else {
        a += 10;
        b += b;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    Calculate(a, b);
    cout << a << ' ' << b;
    return 0;
}