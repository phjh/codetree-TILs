#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<string,int> imap;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        imap[temp]++;
    }

    for(auto a : imap){
        cout<< a.first << ' ' << a.second <<endl;
    }

    return 0;
}