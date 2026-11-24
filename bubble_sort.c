
#include <stdio.h>
void ascending(int a[],int size);
void descending(int b[],int size);
int main(){
    int n;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
    ascending(array,n);
    descending(array,n);
    return 0;

}
void ascending(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("The numbers in ascending order are as follow\n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void descending(int b[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(b[j]<b[j+1]){
                int temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("The numbers in descending order are as follows\n");
    for(int i=0;i<size;i++){
        printf("%d ",b[i]);
    }
}