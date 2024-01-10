#include <iostream>
using namespace std;
int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string GetSeason(int y, int m, int d) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                days[1]++;
            }
        }
        else
            days[1]++;
    }

    if (d > days[m - 1]) {
        return "-1";
    }

    switch (m) {
    case 3:
    case 4:
    case 5:
        return "Spring";
    case 6:
    case 7:
    case 8:
        return "Summer";
    case 9:
    case 10:
    case 11:
        return "Fall";
    case 12:
    case 1:
    case 2:
        return "Winter";
    }
}
int main() {
    int y, m, d;
    cin >> y >> m >> d;
    cout << GetSeason(y, m, d);
}