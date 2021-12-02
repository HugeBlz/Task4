#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, degree;
    int i, j, m = 0;
    printf("Please enter the number of rows: ");
    scanf("%d", &row);
    printf("Please enter the number of columns: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Enter Matrix A\n");
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter A Vertex Degree: ");
    scanf("%d", &degree);
    for (i = 0; i < row; ++i){
            for (j = 0; j < col; ++j){
                m = m + a[i][j];
            }
            if(m == degree){
                    for (j = 0; j < col; ++j){
                            if(a[i][j] == 1){
                                printf("%d\n", j+1);
                            }
                    }
                    m = 0;
            }
            else{
                m = 0;
            }
    }
    return 0;
}
