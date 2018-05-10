#include<iostream>
#include<string>
using namespace std;

int main(){
    int m,n,i,j;
    string str;

    while(cin >> str){
        if(str=="-") break;
        cin >> m;
        for(i=0;i<m;i++){
            cin >> n;
            for(j=0;j<n;j++) str.insert(str.end(),str[j]);
            str.erase(0,n);
        }
        cout << str << endl;
    }
    return 0;
}
