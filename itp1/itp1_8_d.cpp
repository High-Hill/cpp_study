#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[100]={},p[100]={},w[100]={};
    int i,j,slen;

    cin >> s;
    cin >> p;
    slen = strlen(s);
    for(i=0;i<slen;i++){
        if(strstr(s,p) != NULL){
            cout << "Yes" << endl;
            break;
        }else{
            for(j=1;j<slen;j++){
                w[j-1] = s[j];
            }
            w[j-1] = s[0];
            strcpy(s,w);
        }
    }
    if(i == slen) cout << "No" << endl;
    return 0;

}
