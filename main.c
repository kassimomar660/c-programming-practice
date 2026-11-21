
#include <stdio.h>
int main(){
    int n;
    int sub;
    printf("How many numbers you want to enter\n");
    scanf("%d",&n);
    int elements[n];
    printf("Enter thr numbers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(elements[j]>elements[j+1]){
                sub=elements[j+1];
                elements[j+1]=elements[j];
                elements[j]=sub;
            }
        }

            }
            for(int j=0;j<n;j++){
                printf("%d",elements[j]);
        }
    
    return 0;

}