
#include <stdio.h>
void mode(unsigned int arr[]);
int main(){
    unsigned int value[10];
    printf("Enter 10 integers that you want to enter\n");
    for(int i=0;i<10;i++){
    scanf("%u",&value[i]);
    }
    mode(value);
    return 0;
}
void mode(unsigned int arr[]){
    unsigned int max=0;
    unsigned int mod;
    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
        max=count;
        mod=arr[i];

    }
    
    }
    printf("The mode is %u and it's frequency is %u",mod,max);
}

