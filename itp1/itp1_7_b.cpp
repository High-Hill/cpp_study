#include<iostream>
using namespace std;

int main(){
    int n,x,i,j,k,all=0;

    while(cin >> n >> x){
        if(n == 0 && x == 0) break;
        for(i=1;i<=n;i++){
            for(j=1+i;j<=n;j++){
                for(k=1+j;k<=n;k++){
                    if(i != j && j != k && i != k && i+j+k == x) all++;
                }
            }
        }
        cout << all << endl;
        all = 0;
    }
    return 0;
}
