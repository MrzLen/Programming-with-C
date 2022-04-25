# include <iostream>

using namespace std; // string is defined in it 
#define SIZE 10

void stringFunc(const string, string);

int main(){
    string a; // size of string is 4 Bytes
    string b = "String2"; // size of string is 4 Bytes
    
    cout << "Enter string a: ";
    cin >> a;
    
    // strings are always passed by reference
    cout << "Size of a and b are "<< sizeof(a)
        << " and " << sizeof(b)  << " respectively\n";

    stringFunc(a, b);
return 0; 
}

// strings are always passed by reference
void stringFunc(const string a,  string b){
    int i;
    for (i=0; i<SIZE; i++){
        cout << a[i] << ", ";
    }
    
    cout << endl;
    for (i=0; i<SIZE; i++){
        cout << b[i] << ", ";
        // double quote can not be used i.e. "x" is invalid
    b[i] = 'x'; 
    }
    
    // cout << endl;
    // for (i=0; b[i] != '\0'; i++){
    //     cout << b[i] << ", ";
    //     b[i] = 'x';
    // }
    cout << endl << a;
    cout << endl << b;
}
