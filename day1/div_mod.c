#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b , int *div , int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int c;
    int d;


    ft_div_mod(10 , 8,&c ,&d);
    printf("div = %d\n" ,  c);
    printf("mod = %d\n", d);
}