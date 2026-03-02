#include <unistd.h>
#include <stdio.h>

int main()
{
    int b = 42;

    int *a = &b;

    
    printf("value of b is %d\n", b);
    printf("adress of b %p\n", &b);
    printf("adress of a is %p\n", a);

    *a = 60;
     
    printf("value of b is %d\n", b);
    printf("adress of b %p\n", &b);
    printf("adress of a is %p\n", a);

}