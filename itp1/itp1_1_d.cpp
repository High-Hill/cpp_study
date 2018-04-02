#include<iostream>
using namespace std;

int main(){
    int input, hour, minutes, second;

    cin >> input;

    hour = input / 3600;
    minutes = (input % 3600) / 60;
    second = input % 60;

    cout << hour << ":" << minutes << ":" << second << endl;
    return 0;
}
