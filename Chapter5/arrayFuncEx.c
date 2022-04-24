#include <stdio.h>

void addArray(int [], int);

int main(){
    int a[9] = {2,4,6};
    int addValue = 4;

    printf("Initial values in array\n");
    for (int i = 0; i<9; i++){
        printf("%d, ", a[i]);
    }

    printf("\n\n");

    addArray(a, addValue);

    printf("Final values in array\n");
    for (int i =0; i<9; i++){
        printf("%d, ", a[i]);
    }

    return 0;
}

void addArray(int b[], int value){
    for (int i=0; i<9; i++){
        b[i] = b[i] + value;
    }
}