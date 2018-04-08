#include<iostream>
using namespace std;

int main(){
    int i,x[10000];

    while(1){
        cin >> x[i];
        if(x[i] == 0) break;
        i++;
    }
    for(int j;j<i;j++) cout << "Case " << j+1 << ": " << x[j] << endl;
    return 0;
}
