#include <stdio.h>

void  swap(int*, int *);

int main(){
    int x=2, y=5;

    printf("x = %d, y=%d\n", x, y);

    swap(&x, &y); //pass the address, instead of value
    printf("x = %d, y=%d\n", x, y);

    return 0;

}

void swap(int*i, int*j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}