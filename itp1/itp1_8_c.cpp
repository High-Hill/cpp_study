#include<iostream>
#include<stdio.h>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int i,num,alpha[26]={};
    char ch,a='a';

    while(cin >> ch){
        if(isalpha(ch)){
            if(islower(ch)){
                num = ch - 'a';
                alpha[num]++;
            }else{
                num = ch - 'A';
                alpha[num]++;
            }
        }
    }
    for(i=0;i<26;i++){
        cout << a << " : " << alpha[i] << endl;
        a += 1;
    }

    return 0;
}
