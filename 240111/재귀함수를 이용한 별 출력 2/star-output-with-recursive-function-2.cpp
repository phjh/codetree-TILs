#include <iostream>
using namespace std;
void star(int n) {
    if (n < 1) {
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "*" << ' ';
    }
    cout << endl;
    star(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "*" << ' ';
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    star(n);
    return 0;
}