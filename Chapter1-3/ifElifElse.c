# include <stdio.h>

int main(void)
{
    int x=4;
    
    if (x % 2 == 0){
        if(x % 3 == 0){
            printf("Number is divisible by 2 and 3.");
        }
        else{
            printf("Number is divisible by 2 only\n");
            printf("x%%3 = %d\n", x%3);
        }
    }
    else if (x%3 ==0){
        printf("Number is divisible by 3 only.");
    }
        
    else{
        printf("Number is not divisible by 2 and 3\n");
        printf("x%%2 = %d\n", x%2);
        printf("x%%3 = %d\n", x%3);
    }

    return 0;

}
