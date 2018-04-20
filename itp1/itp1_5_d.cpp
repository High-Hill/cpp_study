#include<iostream>
using namespace std;

int main(){
    int n,i,x;
    cin >> n;
    for(i=1;i<=n;i++){
        if(i%3==0){
            cout << " " << i;
        }else{
            x = i;
            while(1){
                if(x%10==3){
                    cout << " " << i;
                    break;
                }
                if(x<10) break;
                x /= 10;

            }

        }
    }
    cout << endl;
    return 0;
}
