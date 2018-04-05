#include<iostream>
using namespace std;

int main(){
    int a,b,c,swap;

    cin >> a >> b >> c;

    if(a > b){
        swap = b;
        b = a;
        a = swap;
    }
    if(b > c){
        swap = c;
        c = b;
        b = swap;
    }
    if(a > b){
        swap = b;
        b = a;
        a = swap;
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}
