#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    char swap;
    string str;
    int length,i;

    getline(cin,str);
    length = str.size();
    for(i=0;i<length;i++){
        if(isalpha(str[i])){
            if(islower(str[i])){
                swap = str[i];
                str[i] = toupper(swap);
            }else if(isupper(str[i])){
                swap = str[i];
                str[i] = tolower(swap);
            }
        }
    }
    cout << str << endl;
    return 0;
}
