#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

namespace math1{
    float pi = 3.14;
    float perimeter(float diameter){
        return (pi*diameter);
    }
}

float perimeter(float);

float perimeter(float diameter){
    return (3.15*diameter);
}

int main(){
    int pi = 3;
    int diameter;

    cout << "Enter diameter : ";
    std::cin >> diameter;

    cout <<"pi in main(): " << pi << endl;

    cout << "pi in namespace-math1:" << math1::pi << endl;

    cout << "perimter = : " << perimeter(100) << endl;
    cout << "perimter from namespace-math1=: " << math1::perimeter(100) << endl;

    return 0;
}