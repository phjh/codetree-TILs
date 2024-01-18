#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<m;i++){
        int temp,j;
        bool found=false;
        cin>>temp;
        for(j=0;j<n;j++){
            if(v[j] == temp){
                found = true;
                break;
            }
        }
        if(found){
            cout<< j+1 << endl;
        }
        else{
            cout << -1<<endl;
        }
    }
    return 0;
}