#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (map.find(temp1) == map.end()) {
            map[temp1] = temp2;
        }
        if (map[temp1] > temp2) {
            map[temp1] = temp2;
        }
    }
    int sum = 0;
    for (auto a : map) {
        sum += a.second;
    }
    cout << sum;
    return 0;
}