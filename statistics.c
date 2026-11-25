
#include <stdio.h>
void mean(unsigned int arr[],unsigned int size);
void median(unsigned int arr[],unsigned int size);
void mode(unsigned int arr[],unsigned int size);
void sort(unsigned int a[],unsigned int size);

int main(){
    unsigned int n;
    printf("How many numbers do you want to enter from 1 to 9\n");
    scanf("%u",&n);
    unsigned int value[n];
    printf("Enter %u numbers from 1 to 9\n",n);
    for(int i=0;i<n;i++){
        scanf("%u",&value[i]);
    }
    mean(value,n);
    median(value,n);
    mode(value,n);

    return 0;

}
void mean(unsigned int arr[],unsigned int size){
    int sum=0;
    for(size_t i=0;i<size;i++){
        sum+=arr[i];
     }
     double meanValue=(double)sum/size;
     printf("The mean of the numbers is %f\n",meanValue);
}
void median(unsigned int arr[],unsigned int size){
    double medianValue;
    sort(arr,size);
    if(size/2!=0){
        medianValue=arr[size/2];

    }else{
        medianValue=(arr[size/2-1]+arr[size/2])/2.0;
    }
    printf("The median is %f\n",medianValue);
}
void mode(unsigned int arr[],unsigned int size){
    unsigned int freq[10]={0};
    
    for(unsigned int i=0;i<size;i++){
        freq[arr[i]]++;
    }
    unsigned int modeValue;
    unsigned int largest=0;
    printf("%s%19s%19s\n","Value","Frequency","Histogram");
    for(unsigned int rating=1;rating<=9;rating++){
        printf("%5u%19u          ",rating,freq[rating]);
        if(freq[rating]>largest){
            modeValue=rating;
            largest=freq[rating];
        }
        for(size_t h=1;h<=freq[rating];h++){
            printf("*");
        }
        printf("\n");
    }
    printf("The mode is %u\n",modeValue);
}
void sort(unsigned int a[],unsigned int size){
    for(size_t i=0;i<size-1;i++){
        for(size_t j=0;j<size-i-1;j++){
            unsigned int temp;
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}


