#include <stdio.h>

const int SIZE = 10;

void stringFunc(const char*, char []);

int main(){

    char a[SIZE] = "string1";
    char b[SIZE] = "string2";

    printf("Size of a and b are %lu and %lu respectivley \n", sizeof(a), sizeof(b));
    stringFunc(a, b);

    return 0;
}

void stringFunc(const char*a, char*b){
    int i ;

    for (i=0; i<SIZE; i++){
        printf("%c, ", a[i]);
    }

    printf("\n");
    for (i=0; i<SIZE; i++){
    printf("%c, ",b[i]);
    
    b[i] = 'x';
    }

    printf("\n");
    printf("%s, ", b);
}