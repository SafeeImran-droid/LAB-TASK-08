#include<stdio.h>
int main(){
    int rows = 5, col = 5;
    int countX = 0, countO = 0;
    int arr[rows][col];
    int i = 0, j = 0;
    for(i = 0; i < rows; i++){
        for (j = 0; j < col; j++){
            if((i+j)%2==0){
                arr[i][j] = 'x';
                countX++;
            }
            else{
                arr[i][j] = 'o';
                countO++;
            }
        }
    }
    for(i = 0; i < rows; i++){
        for(j = 0; j < col; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    printf("Summary  \n");
    printf("Students seated : %d\n", countX);
    printf("Empty Seats : %d\n", countO);
    printf("Total seats : %d", (countO+countX));
}
