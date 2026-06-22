#include <stdio.h>

char keypad[4][4]={
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'},
};

int main() {
    int row,col;
    for(row=0;row<4;row++){
        printf("Scanning current Row:%d\n",row);
        for(col=0;col<4;col++){
            if(row==1 && col==1){
                printf("The Key Pressed is %c\n",keypad[row][col]);
            }
        }

    }

    return 0;
}