#include<iostream>
#include<string>
using namespace std;

int main(){
    int i,no=0,counter=0;
    string w,t;

    cin >> w;
    while(cin >> t){
        if(t == "END_OF_TEXT") break;
        for(i=0;i<t.size();i++){
            // ここをcctypeのisupperで判定してたらずっとWAだった．．
            if(t[i] >= 'A' && t[i] <= 'Z') t[i] += ('a' - 'A');
            if(w[i] != t[i]){
                no = 1;
                break;
            }
        }
        if(i == w.size() && no == 0){
            counter++;
        }
        no = 0;
    }
    cout << counter << endl;
    return 0;
}
