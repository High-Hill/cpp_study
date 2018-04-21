#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n,i;
    int a[1000];

    cin >> n;
    for(i=0;i<n;i++){
        if(i==0){
            scanf("%d",&a[i]);
        }else{
            scanf(" %d",&a[i]);
        }
    }
    for(i=n-1;i>=0;i--){
        if(i==n-1){
            cout << a[i];
        }else{
            cout << " " << a[i];
        }
    }
    cout << endl;
    return 0;
}
