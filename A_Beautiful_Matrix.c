#include <stdio.h>
int main () {

    int arr[5][5];
    int row, col;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 1){
                row = i + 1;
                col = j + 1;
            }
        }

    }

    

    int rowMove = row - 3;

    if(rowMove < 0){
        rowMove = rowMove * -1;
    }

    int colMove = col - 3;

    if(colMove < 0){
        colMove = colMove * -1;
    }
 

    printf("%d", rowMove + colMove);
 
    return 0;
}