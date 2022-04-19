
# include <stdio.h> 
int main(){
    int int_value;
    float float_value;
    char char_value = 'W';
    char str_value[30] = "West"; // char-array of size 30 : can store 30 characters

    printf("Enter integer: \t");
    scanf("%d", &int_value); // see & sign for reading values.
    
    printf("Enter float: \t");
    scanf("%f", &float_value);
    
    printf("Enter character: \t");
    scanf(" %c", &char_value); // look for space at the beginning i.e. "space %c"

    printf("Enter string: \t");
    scanf("%s", &str_value[0]); // or use scanf("%s", str_value)
    
    printf("\nInteger: %d", int_value); // 
    printf("\nFloat: %f", float_value); // 
    printf("\nCharacter: %c", char_value); // 
    printf("\nString: %s", str_value); //
    return 0; 
}
/* Outputs
Enter integer:  32
Enter float:
Enter character:
Enter string:
123.4
M
Meher
Integer: 32
Float: 123.400002
Character: M
String: Meher */