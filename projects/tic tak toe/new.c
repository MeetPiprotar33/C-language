#include<stdio.h>
#include<stdbool.h>

void printbox(char box[3][3]){
    printf("  0  1  2\n");
    for (int i=0;i<3;i++){
        printf("%d ",i);
        for (int j=0;j<3;j++){
            printf("%c  ",box[i][j]);
        }
        printf("\n");
    }
    return ;
}
bool x_win_check(char x_win[3][3]){
    bool xwin=false;
    //for horizontal line check 
    if (x_win[0][0] == 'x' && x_win[0][1] == 'x' && x_win[0][2]=='x') xwin=true;
    if (x_win[1][0] == 'x' && x_win[1][1] == 'x' && x_win[1][2]=='x') xwin=true;
    if (x_win[2][0] == 'x' && x_win[2][1] == 'x' && x_win[2][2]=='x') xwin=true;
    //for checking verticle lines
    if (x_win[0][0] == 'x' && x_win[1][0] == 'x' && x_win[2][0]=='x') xwin=true;
    if (x_win[0][1] == 'x' && x_win[1][1] == 'x' && x_win[2][1]=='x') xwin=true;
    if (x_win[0][2] == 'x' && x_win[1][2] == 'x' && x_win[2][2]=='x') xwin=true;
    //for checking cross lines
    if (x_win[0][0] == 'x' && x_win[1][1] == 'x' && x_win[2][2]=='x') xwin=true;
    if (x_win[0][2] == 'x' && x_win[1][1] == 'x' && x_win[2][0]=='x') xwin=true;
    return xwin;

}
bool o_win_check(char o_win[3][3]){
    bool owin=false;
    //for horizontal line check
    if (o_win[0][0] == 'o' && o_win[0][1] == 'o' && o_win[0][2]=='o') owin=true;
    if (o_win[1][0] == 'o' && o_win[1][1] == 'o' && o_win[1][2]=='o') owin=true;
    if (o_win[2][0] == 'o' && o_win[2][1] == 'o' && o_win[2][2]=='o') owin=true;
    //for checking verticle lines
    if (o_win[0][0] == 'o' && o_win[1][0] == 'o' && o_win[2][0]=='o') owin=true;
    if (o_win[0][1] == 'o' && o_win[1][1] == 'o' && o_win[2][1]=='o') owin=true;
    if (o_win[0][2] == 'o' && o_win[1][2] == 'o' && o_win[2][2]=='o') owin=true;
    //for checking cross lines
    if (o_win[0][0] == 'o' && o_win[1][1] == 'o' && o_win[2][2]=='o') owin=true;
    if (o_win[0][2] == 'o' && o_win[1][1] == 'o' && o_win[2][0]=='o') owin=true;
    return owin;

}

int main(){

    char box[3][3];
    int n=3;
    int r,c;

    /* for making box
    ---
    ---
    --- */
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            box[i][j]='-';
        }
    }
    printf("Welcome..");
    printf("box structure is like :\n");
    printf("  0  1  2\n");
    printf("0 -  -  - \n");
    printf("1 -  -  - \n");
    printf("2 -  -  - \n");

    for (int i=0;i<9;i++){
        if(i%2==0){
            label1:
            printf("\nplayer X's turn :\nEnter the row :");
            scanf("%d",&r);
            printf("Enter the column :");
            scanf("%d",&c);
            if (r>2 || c>2) {
                printf("Sorry Enter value from 0 1 2 ..");
                goto label1;
            }            
            if(box[r][c]!='-') {
                printf("Sorry its already filled..\n");
                goto label1;}
            else box[r][c]='x';            
        }else{
            label2:
            printf("\nplayer o's turn :\nEnter the row :");
            scanf("%d",&r);
            printf("Enter the column: ");
            scanf("%d",&c);
            if (r>2 || c>2) {
                printf("Sorry Enter value from 0 1 2 ..");
                goto label2;
            }            
            if(box[r][c]!='-') {
                printf("Sorry its already filled..\n");
                goto label2;}
            else box[r][c]='o';
        }
        if(x_win_check(box)==true) goto x_is_win;
        if (o_win_check(box)==true) goto o_is_win;
        printf("The box after change is :\n");
        printbox(box);

    }    

    x_is_win:
        if(x_win_check(box)==true){
            printf("cangarusession:\n");
            printf("Player x is the winner..");
        }
    o_is_win:
        if(o_win_check(box)==true){
            printf("cangarusession:\n");
            printf("Player o is the winner..");
        }
    if (o_win_check(box)!=true && x_win_check(box)!=true){
        printf("\nIts tie..");
    }
    return 0;
}