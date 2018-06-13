#include<iostream>
using namespace std;

typedef struct DICE{
    int s[6];
}dice;

dice dice_rotate(dice d, char rotate){
    int swap;
    if(rotate == 'E'){
        swap = d.s[2];
        d.s[2] = d.s[0];
        d.s[0] = d.s[3];
        d.s[3] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'N'){
        swap = d.s[4];
        d.s[4] = d.s[0];
        d.s[0] = d.s[1];
        d.s[1] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'S'){
        swap = d.s[1];
        d.s[1] = d.s[0];
        d.s[0] = d.s[4];
        d.s[4] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'W'){
        swap = d.s[3];
        d.s[3] = d.s[0];
        d.s[0] = d.s[2];
        d.s[2] = d.s[5];
        d.s[5] = swap;
    }

    return d;
}

dice set_top(int d1_top, dice d2){
    int i;

    for(i=0;i<3;i++){
        if(d2.s[0] == d1_top) break;
        d2 = dice_rotate(d2, 'S');
    }
    if(d2.s[0] != d1_top){
        d2 = dice_rotate(d2, 'E');
    }
    if(d2.s[0] != d1_top){
        d2 = dice_rotate(d2, 'E');
        d2 = dice_rotate(d2, 'E');
    }

    return d2;
}

dice set_flont(int flont, dice d2){
    int i;
    for(i=0;i<3;i++){
        if(flont == d2.s[1]) break;
        d2 = dice_rotate(d2, 'E');
        d2 = dice_rotate(d2, 'S');
        d2 = dice_rotate(d2, 'W');
    }

    return d2;
}
int main(){
    dice d1,d2,proto1,proto2;
    char rotate;
    int i,j,q,top,flont;

    for(i=0;i<6;i++){
        cin >> d1.s[i];
    }
    for(i=0;i<6;i++){
        cin >> d2.s[i];
    }

    proto1 = d1;
    proto2 = d2;

    d2 = set_top(d1.s[0], d2);
    if(d1.s[0] != d2.s[0]){
        cout << d1.s[0] << " " << d2.s[0] << endl;
        cout << "1:No" << endl;
        return 0;
    }
    d2 = set_flont(d1.s[1], d2);
    if(d1.s[1] != d2.s[1]){
        cout << d1.s[1] << " " << d2.s[1] << endl;
        cout << "2:No" << endl;
        return 0;
    }
    for(i=0;i<6;i++){
        cout << d1.s[i] << " " << d2.s[i] << endl;
        if(d1.s[i] != d2.s[i]){
            cout << "3:No" << endl;
            cout << d1.s[0] << d1.s[1] << d1.s[2] << d1.s[3] << d1.s[4] << d1.s[5] << endl;
            cout << d2.s[0] << d2.s[1] << d2.s[2] << d2.s[3] << d2.s[4] << d2.s[5] << endl;
            break;
        }
    }
    if(i==6){
        cout << "Yes" << endl;
    }

    return 0;
}

