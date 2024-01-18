#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> queue;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        long long mult = 1;
        cin >> temp;
        queue.push(temp);
        priority_queue<int, vector<int>, greater<int>> tempqueue = queue;
        if (queue.size() < 3) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < 3; i++) {
            mult *= tempqueue.top();
            tempqueue.pop();
        }
        cout << mult << endl;

    }

    return 0;
}