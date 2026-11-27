
#include <stdio.h>
int main(void){
    int a=7;
    int *aPtr=&a;
    printf("The address of a is %p\n",&a);
    printf("The value of aPtr is %p\n",aPtr);
    printf("The value of a is %d\n",a);
    printf("The value of *aPtr is %d\n",*aPtr);
    printf("To show that *&aPtr and &*aPtr are complement to each other\n");
    printf("&*aPtr=%p\n",&*aPtr);
    printf("*&aPtr=%p\n",*&aPtr);
    return 0;

}