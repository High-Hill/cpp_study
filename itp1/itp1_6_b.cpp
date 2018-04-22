#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,r,pi,i=0,j;
    char p;
    int card[4][13] = {};
    char pattern[4] = {'S','H','C','D'};

    cin >> n;
    for(i=0;i<n;i++){
        cin >> p >> r;
        if(p == 'S'){
            pi = 0;
        }else if(p == 'H'){
            pi = 1;
        }else if(p == 'C'){
            pi = 2;
        }else if(p == 'D'){
            pi = 3;
        }else{
            continue;
        }
        card[pi][r-1] = 1;
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(card[i][j] == 0) cout  << pattern[i] << " " << j + 1 << endl;
        }
    }
    return 0;
}
