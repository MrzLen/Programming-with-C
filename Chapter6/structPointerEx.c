# include <stdio.h>

int main(){
    struct item
    {
        int id;
        const char *company;
        float cost;
    }; // semicolon at the end

    struct item radio = {101, "Sony", 99.99}; // variable radio of type `item' 
    struct item *radioPointer; // pointer variable of type 'item'
    
    radioPointer = &radio; // assign address of variable 'radio' to pointer
    
    printf("id using variable = %d\n", radio.id); // printing value using '.' operator 
    printf("id using pointer-variable = %d\n", radioPointer->id); // printing value using '->' operator
    
    printf("initial company name using variable = %s\n", radio.company); // printing value using '.' operator
    
    radioPointer->company = "Panasonic"; // modify company name using pointer 
    printf("modified company name using pointer variable = %s\n",radioPointer->company); // printing value using '->' operator

    return 0; 
}