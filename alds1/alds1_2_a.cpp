#include<iostream>
using namespace std;

int main(){
    int n,i,j,swap,count=0;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++) cin >> a[i];

    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap = a[j];
                a[j] = a[j-1];
                a[j-1] = swap;
                count++;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << a[i];
        if(i!=n-1) cout << " ";
    }
    cout << endl;
    cout << count << endl;
    return 0;

}
