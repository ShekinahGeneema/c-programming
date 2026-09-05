#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for(k=1;k<=rows;k++){
            if(i==1||i==rows){
            int l=1;
            while(l<=rows){
            printf("*");
            l++;
            break;}}
            if(i>1 && i<rows){
                printf("*");
                int l=1;
                while(l<=rows-2){
                printf(" ");
                l++;
                }
                printf("*");
                break;
            }


    }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
