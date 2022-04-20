#include <stdio.h>

float add2Num(int, float);

float add2Num(int a, float b){
    float c;
    c = a+ b;

    return c;
}

int main(){
    int x=2;
    float y = 3.5, z;

    z = add2Num(x,y);

    printf("z = %f\n", z);

    return 0;

}