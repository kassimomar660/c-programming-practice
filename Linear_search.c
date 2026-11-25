
#include <stdio.h>
int linearSearch(int arr[],int key);
int main(){
    printf("Enter 10 numbers that you want to enter\n");
    int a[10];
    for(size_t i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    printf("Which number do you want to search\n");
    int numb;
    scanf("%d",&numb);
    int index=linearSearch(a,numb);
    if(index!=-1){
        printf("Number found at index %d",index);
    }else{
        printf("Number not found!!\n");
    }
    return 0;

}
int linearSearch(int arr[],int key){
    for(size_t i=0;i<10;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
