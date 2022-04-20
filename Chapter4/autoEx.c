#include <stdio.h>

int main(){

    int x = 2;
    printf("x = %d\n", x);

    {
        int y=2;
        printf("y = %d\n", y);
    }

    int z;

    printf("printed at the end: x = %d\n", x);

    printf("z = %d\n",z);

    return 0;

}