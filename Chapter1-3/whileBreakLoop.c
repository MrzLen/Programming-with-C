# include <stdio.h>

int main(void)
{
    int i=0;
    
    while(i < 10){
        printf("%d,", i);
        i = i + 1;
        
        if (i % 7 == 0){
            break;
        } 
    }
    
    return 0; 
}
