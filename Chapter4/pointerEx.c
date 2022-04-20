# include <stdio.h>
int main(){
    int x =2;
    int *y;

    y = &x;

    printf("x = %d\n", x); // value of x
    printf("&x = %p\n", &x); // &x = address of x
    printf("y = %p\n", y); // y = address of x (print in pointer-address) 
    printf("*y = %d\n", *y); // *y = value store at address y = value of x
    
    return 0;
}