#include <iostream>
using namespace std;

bool isEarlier(string a, string b)
{
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int main() {
    string year, day;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t3 == "Rain"&& (isEarlier(t1,year)||year.empty() ) ) {
            year = t1;
            day = t2;
        }
    }

    cout << year << ' ' << day << " Rain";

    return 0;
}