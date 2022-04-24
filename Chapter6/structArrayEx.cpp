# include <stdio.h>

int main(){
    struct item
    {
        int id;
        const char* company;
        float cost;
    };

    struct item a[3];

    a[0].id = 102;
    a[0].company = "Panasonic";
    printf("a[0] company: %s", a[0].company);
    
}