#include<iostream>
using namespace std;

int main(){
    int h,w,i,j;
    while(cin >> h >> w){
        if(h == 0 && w == 0) break;
        for(j=0;j<h;j++){
            for(i=0;i<w;i++) cout << "#";
            cout << endl;

        }
        cout << endl;
    }
    return 0;
}
