#include <stdio.h>

#define SIZE 10


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

    for (i=0; *a != '\0'; a++){
        printf("%c, ", a[i]);
    }

    printf("\n");
    for (i=0; b[i] != '\0'; i++){
        printf("%c, ",b[i]);
    
        b[i] = 'x';
    }

    printf("\n");
    printf("%s, ", b);
}