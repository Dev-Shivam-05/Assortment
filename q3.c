#include<stdio.h>
int main(){
    int rows, cols, i, j;
    printf("array's row & column size: ");
    scanf("%d", &rows);
    cols = rows; 
    int array[rows][cols], transpose[rows][cols];
    printf("array's elements:\n");
    for(i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = array[i][j];
        }
    }
    printf("The transpose matrix of an array:\n");
    for(i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
