# include<stdio.h>

typedef int(*operation) (int);  //function pointer 

int cube(int i){
    return i*i*i;
}

int square(int i){
    return i*i;
}

int perform_operation(int i, operation op){
    return op(i);
}

int main(){

    int a=2;
    int b;

    b = perform_operation(a, cube);
    printf("cube of %d = %d\n", a, b);

    b = perform_operation(a, square);
    printf("cube of %d = %d\n", a, b);

    return 0;

}