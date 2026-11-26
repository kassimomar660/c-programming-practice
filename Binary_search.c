
#include <stdio.h>
int BinarySearch(unsigned int arr[],unsigned int size,size_t key);
void sort(unsigned int a[],unsigned int size);
int main(){
    int n;
    printf("How many numbers do you want to enter\n");
    scanf("%d",&n);
    unsigned int value[n];
    unsigned int numb;
    printf("Enter %d numbers that you want to enter\n",n);
    for(size_t i=0;i<n;i++){
        scanf("%u",&value[i]);
    }
    printf("Which number do you want to search\n");
    scanf("%u",&numb);

    int index=BinarySearch(value,n,numb);
    if(index!=-1){
        printf("The number found at index %d\n",index);
    }
    else{
        printf("The number not found\n");
    }
    return 0;

}
int BinarySearch(unsigned int arr[],unsigned int size,size_t key){
    int low=0;
    int high=size;
    int mid;
    sort(arr,size);
    while(low<=high){
        mid=(high+low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return -1;
}
void sort(unsigned int a[],unsigned int size){
    unsigned int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }

        }
    }
}