#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a){
    int i;
    if(a == 2) return true;
    if(a % 2 == 0 || a < 2) return false;
    for(i=3;i<=sqrt(a)+1;i+=2) if(a % i == 0) return false;
    return true;
}

int main(){
    int n,i,count=0;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++) cin >> a[i];

    for(i=0;i<n;i++) if(isPrime(a[i])) count++;

    cout << count << endl;
    return 0;
}
