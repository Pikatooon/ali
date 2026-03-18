#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    
    int temp;

    temp = *a / *b;
    
    *b = *a % *b;
    *a = temp;
    
    
    
}


void    ft_putchar(char c)
{

    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
}

int main()
{
    int x = 17;
    int y = 8;

    ft_ultimate_div_mod(&x, &y);

    ft_putnbr(x);
    ft_putchar('\n');
    ft_putnbr(y);
    ft_putchar('\n');
    

}