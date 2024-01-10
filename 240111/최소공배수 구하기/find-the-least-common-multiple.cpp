#include <iostream>
using namespace std;
int main() {
    int n,m;
    int i=0;
    cin>>n>>m;
    while(true){
        i+=m;
        if(i%n==0){
            break;
        }
    }
    cout << i;
    return 0;
}