#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    
    *nbr = 42;
}
int main()
{
    int a = 20;
    char c;
    
    ft_ft(&a);
    c = (a / 10) + '0';
    write(1, &c, 1);
    c = (a % 10) + '0';    
    write(1, &c, 1);
    return 0;
}    


