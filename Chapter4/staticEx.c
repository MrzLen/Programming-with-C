#include <stdio.h>

int incFunct(int);
int staticIncFunc(int);

int incFunct(int i){
    int j =0;
    j = j+ i;
    return j;
}

int staticIncFunc(int i){
    static int j=0;
    j = j+i;
    return j;
}

int main(){

    int increment_value = 1;
    int auto_output;
    int static_output;

    for (int j=0; j<5; j++){
        auto_output = incFunct(increment_value);
        static_output = staticIncFunc(increment_value);

    }

    printf("output incFunc: auto_output = %d\n", auto_output);
    printf(" output staticIncFunc: static_output = %d\n", static_output);

    return 0; 
}