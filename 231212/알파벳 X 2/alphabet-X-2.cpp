#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<char> stk;
    string str;
    cin >> str;
    for (auto a : str) {
        if (stk.empty()) {
            stk.push(a);
        }
        else if (stk.top() != a) {
            stk.push(a);
        }
        else {
            stk.pop();
        }
    }

    cout << stk.size()/2 - 1;

    return 0;
}