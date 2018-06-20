#include<iostream>
using namespace std;

int gcd(int x, int y){
    while(y != 0 && x != 0){
        if(x > y){
            x = x % y;
        }else{
            y = y % x;
        }
    }
    if(x != 0){
        return x;
    }else{
        return y;
    }
}
int main(){
    int x,y,d;

    cin >> x >> y;
    if(x > y){
        d = gcd(x, y);
    }else{
        d = gcd(y, x);
    }
    cout << d << endl;

    return 0;
}
