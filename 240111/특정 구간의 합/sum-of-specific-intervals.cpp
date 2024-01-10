#include <iostream>
using namespace std;
int A[101];
int main() {
    int m,n;
    cin >> m>>n;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        A[i] = temp;
    }
    for(int i=0;i<n;i++){
        int temp1,temp2,sum=0;
        cin>>temp1>>temp2;
        for(;temp1<=temp2;temp1++){
            sum += A[temp1-1];
        }
        cout << sum << endl;
    }
    return 0;
}