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
    }else if(rotate == 'R'){
        swap = d.s[1];
        d.s[1] = d.s[2];
        d.s[2] = d.s[4];
        d.s[4] = d.s[3];
        d.s[3] = swap;
    }

    return d;
}

dice dice_jig(dice d, int i){
    if(i%2==0){
        d = dice_rotate(d, 'S');
    }else if(i%2==1){
        d = dice_rotate(d, 'E');
    }

    return d;
}

bool same_judge(dice d1, dice d2){
    int i;
    bool judge=true;
    for(i=0;i<6;i++){
        if(d1.s[i] != d2.s[i]) judge = false;
    }

    return judge;
}
int main(){
    dice d1,d2;
    int i,j;
    bool judge=false;

    for(i=0;i<6;i++) cin >> d1.s[i];
    for(i=0;i<6;i++) cin >> d2.s[i];

    for(i=0;i<6;i++){
        if(d1.s[0] == d2.s[0]) break;
        d2 = dice_jig(d2, i);
    }

    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            if(d1.s[1] == d2.s[1] && d1.s[2] == d2.s[2] && d1.s[4] == d2.s[4] && d1.s[3] == d2.s[3]) break;
            d2 = dice_rotate(d2, 'R');
        }
        if(same_judge(d1,d2)){
            judge = true;
            break;
        }
        d2 = dice_jig(d2, i);
    }

    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
