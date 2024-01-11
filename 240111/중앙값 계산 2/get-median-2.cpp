#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[101];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp;
        sort(arr, arr + i + 1);
            if (i % 2 == 0) {
                cout << arr[i / 2] << ' ';
            }
    }


    return 0;
}