#include <stdio.h>

void addArray(const int*, const int);

int main(){
    int a[3] = {2, 4,6};
    int b=2;

    addArray(a, b);

    return 0;

}

void addArray(const int *a, const int b){
    for (int i =0; i<3; i++){
        printf("%d, ", a[i]);
    }
}