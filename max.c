#include<stdio.h>
int main(){
    int arr[3][3]= {
        {12,34,56},
        {72,4,6},
        {90,67,12}
    };
    int i = 0, j = 0;
    int max = arr[0][0];
    int maxrow = 0, maxcol = 0;
    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                maxrow = i;
                maxcol = j;
            }
        }
        
        printf("%d\n %d\n %d\n", max, maxrow, maxcol);
    }
}
