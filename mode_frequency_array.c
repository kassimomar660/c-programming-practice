
#include <stdio.h>
void mode(unsigned int arr[]);
int main(){
    printf("Enter 10 integers that you want to enter from 1 to 10\n");
    unsigned int value[10];
    for(size_t i=0;i<10;i++){
        scanf("%u",&value[i]);
    }
    mode(value);
    return 0;
}
void mode(unsigned int arr[]){
    unsigned int freq[9];
    for(int rating=1;rating<=9;rating++){
        freq[rating]=0;
    }
    for(int j=0;j<10;j++){
        freq[arr[j]]++;

    }
    unsigned int modeValue=0;
    unsigned int largest=0;
    for(size_t rating=1;rating<=9;rating++){
        if(freq[rating]>largest){
            modeValue=rating;
            largest=freq[rating];
        }

    }
    printf("The mode is %u and it's frequency is %u\n",modeValue,largest);

}