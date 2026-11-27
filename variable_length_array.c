
#include <stdio.h>
void print1DArray(size_t size,int array[size]);
void print2DArray(int row,int col,int array[row][col]);
int main(void){
    int sizeOfArray;
    printf("Enter size of 1 deimesndional array\n");
    scanf("%d",&sizeOfArray);
    int array1D[sizeOfArray];
    int col1,row1;
    printf("Enter row and column of two dimensional array1\n");
    scanf("%d %d",&row1,&col1);
    int array2D1[row1][col1];
    printf("Enter row and column of two dimensional array2\n");
    int col2,row2;
    scanf("%d %d",&row2,&col2);
    int array2D2[row2][col2];
    for(size_t i=0;i<sizeOfArray;i++){
        array1D[i]=i*i;
    }
    for(size_t i=0;i<row1;i++){
        for(size_t j=0;j<col1;j++){
            array2D1[i][j]=i+j;
        }
    }
    for(size_t i=0;i<row2;i++){
        for(size_t j=0;j<col2;j++){
            array2D2[i][j]=i+j;
        }
    }
    puts("One dimensional array:");
    print1DArray(sizeOfArray,array1D);
    puts("First two dimensional array:");
    print2DArray(row1,col1,array2D1);
    puts("Second two dimensional array:");
    print2DArray(row2,col2,array2D2);
    return 0;
}

void print1DArray(size_t size,int array[size]){
    for(size_t i=0;i<size;i++){
        printf("array[%u]=%d\n",i,array[i]);
    }
}

void print2DArray(int row,int col,int array[row][col]){
    for(size_t i=0;i<row;i++){
        for(size_t j=0;j<col;j++){
            printf("%d ",array[i][j]);
        }

        printf("\n");
    }
}