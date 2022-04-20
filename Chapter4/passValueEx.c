#include<stdio.h>

int cube(int);
int square(int);

int main(){
    int a = 2;
    int c;
    int s;

    c = cube(a);
    s = square(a);

    printf("cube of %d = %d\n", a, c);
    printf("square of %d = %d\n", a, s);

    return 0;

}

int cube(int i){
    return i*i*i;
}

int square(int i){
    return i*i;
}