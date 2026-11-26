
#include <stdio.h>
void printArray(int arr[][3]);
int main(){
    int array1[2][3]={{1,9,5},{4,7,2}};
    puts("Values in array1 by row are");
    printArray(array1);
    int array2[2][3]={2,9,4,5,6,7};
    puts("Values in array2 by row are");
    printArray(array2);
    int array3[2][3]={{3,6},{7}};
    puts("Values in array3 by row are");
    printArray(array3);
    return 0;

}
void printArray(int arr[][3]){
    for(size_t i=0;i<2;i++){
        for(size_t j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
