#include <stdio.h>

struct add {
    int y:28;
    char z;
};

int main()
{
    struct add s;    
    
    printf("Size is:%ld\n", sizeof(s));
    
    while(1);
    
    return 0;
}
