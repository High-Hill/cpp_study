#include<iostream>
using namespace std;

int main(){
    int array[3000][2];
    int x,y,i=0;

    while(1){
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        array[i][0] = x;
        array[i][1] = y;
        i++;
    }
    for(int j = 0;j<i;j++){
        if(array[j][0] < array[j][1]){
            cout << array[j][0] << " " << array[j][1] << endl;
        }else{
            cout << array[j][1] << " " << array[j][0] << endl;
        }
    }

return 0;
}
