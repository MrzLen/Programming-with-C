#include <iostream>

using namespace std;

void dot_product(int [][1], int[][1], int, int*);

int main(){

    const int N = 4;
    int x[N][1] = {{2}, {4}, {6}, {8}};
    int y[N][1] = {{1}, {3}, {5}, {7}};
    int result;

    dot_product(x, y, N, &result);

    cout << "Dot product = " << result;

    return 0; 
}


void dot_product(int x[][1], int y[][1], int N, int* result){
    
    int i;
    *result = 0;

    for (i=0; i<N; i++){
        *result += (x[i][0] * y[i][0]);
    }
}