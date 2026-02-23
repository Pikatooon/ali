#include <unistd.h>

void ft_putnuber()
{
    char i = '0';

    while(i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}
int main()
{
    ft_putnuber();
}