#include<iostream>
#include<string>
using namespace std;

int main(){
    int i,n,t_p=0,h_p=0;
    string t_s,h_s;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> t_s >> h_s;
        if(t_s > h_s){
            t_p += 3;
        }else if(t_s < h_s){
            h_p += 3;
        }else if(t_s == h_s){
            t_p += 1;
            h_p += 1;
        }
    }
    cout << t_p << " " << h_p << endl;
    return 0;

}
