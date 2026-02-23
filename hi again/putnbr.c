#include <unistd.h>


void putnbr(int nb)
{
    char  c;

    if (nb == -2147483648)
    {
        write(1,"-2147483648",11);
    }    
    if(nb  < 0)
    {
        write(1,"-", 1);
        nb = -nb;
    }
    if(nb > 9)
    {
        putnbr(nb / 10);
    }
    c = (nb % 10) + '0';
    write(1, &c, 1);
}    
int main()
{
    putnbr(42);
}
    
