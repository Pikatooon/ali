#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c, 1);
}

int main()
{

    ft_putchar('h');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar('\n');
}
