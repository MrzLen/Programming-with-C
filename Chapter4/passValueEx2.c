#include<stdio.h>

void cube_square(int*, int*, int);

int main(){
    int a = 2;
    int c;
    int s;

    cube_square(&c, &s, a);

    printf("cube of %d = %d\n", a, c);
    printf("square of %d = %d\n", a, s);

    return 0;

}

void cube_square(int*j, int*k, int i){
    *j = i*i*i;
    *k = i*i; 
}