#include <iostream>

using namespace std;

int a = 20; //global variable

int main(){

    int a = 4;

    cout << "Local Variable: " << a << endl;

    cout << "Global Variable: " << ::a;

    return 0; 
}