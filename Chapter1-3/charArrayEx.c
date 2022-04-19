# include <stdio.h>

int main(){

    char a[30] = "Meher";
    const char *b = "Patel";

    printf("Initial Name: %s %s\n", a, b);

    printf("Enter new name: \t");
    scanf("%s", &a[30]);

    b = "New World";
    printf("%s %s", a, b);

    return 0; 
}