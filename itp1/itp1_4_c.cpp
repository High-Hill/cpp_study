#include<iostream>
using namespace std;

int main(){
    int a,b,i=0;
    char op;
    int result[1000];

    while(1){
        cin >> a >> op >> b;
        if(op == '?'){
            break;
        }else if(op == '+'){
            result[i] = a + b;
        }else if(op == '-'){
            result[i] = a - b;
        }else if(op == '/'){
            result[i] = a / b;
        }else if(op == '*'){
            result[i] = a * b;
        }else{
            continue;
        }
        i++;
    }
    for(int j = 0;j < i;j++) cout << result[j] << endl;

    return 0;

}
