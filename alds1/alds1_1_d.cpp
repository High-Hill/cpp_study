#include<iostream>
using namespace std;

int main(){
    int n,i,r,minv,maxv;
    cin >> n;
    cin >> r;
    minv = r;
    maxv = -1000000000;
    for(i=1;i<n;i++){
        cin >> r;
        if(r - minv > maxv) maxv = r - minv;
        if(r < minv) minv = r;
    }
    cout << maxv << endl;

    return 0;
}
