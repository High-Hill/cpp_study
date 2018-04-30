#include<iostream>
using namespace std;

int main(){
    int r,c,i,j,sum=0,sumall=0;
    int result[101][101]={{}};
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> result[i][j];
            sum += result[i][j];
        }
        result[i][j] = sum;
        sumall += sum;
        sum = 0;
    }
    sum = 0;
    sumall = 0;
    for(j=0;j<c;j++){
        for(i=0;i<r;i++) sum += result[i][j];
        result[r][j] = sum;
        sum = 0;
    }
    for(j=0;j<c;j++) sumall += result[r][j];
    result[r][j] = sumall;
    for(i=0;i<r+1;i++){
        for(j=0;j<c+1;j++){
            if(j!=c){
                cout << result[i][j] << " ";
            }else{
                cout << result[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
