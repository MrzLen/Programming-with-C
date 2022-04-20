#include <stdio.h>

int main(){
    int x =4;
    int *y;
    int **z;

    y = &x;
    z = &y;

    printf("x : values of x: %d\n", x);
    printf("*y : values of x: %d\n", *y);
    printf("**z : values of x: %d\n", **z);
    printf("&x: address of x: %p\n", &x);
    printf("y: address of x: %p\n", y);
    printf("*z: address of x: %p\n", *z);
    printf("&y: address of y: %p\n", &y);
    printf("z: address of y: %p\n", z);
    
    return 0;
}