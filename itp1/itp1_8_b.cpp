#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int i,num,sum=0;

    while(cin >> str){
        if(str[0] == '0') break;
        for(i=0;i < str.size(); i++){
            num = str[i] - '0';
            sum += num;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
