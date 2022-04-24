#include <stdio.h>

int main(){
    int a[5];
    float b[3] = {2, 4.5, 6};
    int c[] = {3, 5};
    int d[5] = {3, 5};

    printf("a[0] = %d\n", a[0]);

    printf("c[0] = %d\n", c[0]);

    printf("d[0] = %d\n", d[0]);
    printf("d[2] = %d\n", d[2]);
    printf("d[4] = %d\n", d[4]);

    printf("%s %10s\n", "element", "value");
    for (int i=0; i<3; i++){
        printf("%4d %12.1f\n", i, b[i]); // %12.1f = show minimum 12 integer & 1 decimal 
    }
    // assign values of array a

    for (int i=0; i<5; i++){
        a[i] = 2*i;
    }
    
    // print values of array a
    printf("%s %10s\n", "element", "value");
    for (int i=0; i<5; i++){
        printf("%4d %12d\n", i, a[i]); // %12.1f = show minimum 12 integer and 1 decimal place 
    }
    
    return 0;
}