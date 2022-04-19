#include <stdio.h>

int main(void){

    char grade = 'B';

    switch(grade){
        case('A'):
            printf("A: excellent");
            break;
        case('B'):
            printf("B: good");
            break;
        case'C':
            printf("C: not bad");
            break;
        default:
            printf("Effort");
    }    

    return 0;

}