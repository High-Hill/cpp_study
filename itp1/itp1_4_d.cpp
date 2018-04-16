#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i,n;
    int a[10000];
    int max=-1000000,min=1000000;
    long sum=0;

    cin >> n;
    for (i = 0;i < n;i++) cin >> a[i];
    for (i = 0;i < n;i++){
        if(a[i]<min) min = a[i];
        if(a[i]>max) max = a[i];
        sum = sum + a[i];
    }
    cout << min << " " <<  max << " " <<  sum << endl;
    return 0;
}
