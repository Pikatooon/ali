#include <unistd.h>
#include <stdio.h>
int *atoi(char *str, int *tab, int *size)
{
    int i;
    int j;

    j = *size;
    i = 0;
    while(str[i])
    {
        tab[j] = 0;
        while(str[i] >= '0' && str[i] <= '9')
        {
            tab[j] = tab[j] * 10 + (str[i] - '0');
            i++;
        }
        j++;
        if(str[i] == ' ')
        {
            i++;
        }
    }
    *size = j;
    return(tab);
}
void ft_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void putnbr(int nb)
{
    if(nb >= 10)
    {
        putnbr(nb / 10);
    }
    char c;
    c = (nb % 10) + '0';
    write(1, &c, 1);
}
void putnbr_tab(int *tab, int size)
{
    int i;
 
    i = 0;
    while(i < size)
    {
        putnbr(tab[i]);
        write(1, " ", 1);
        i++;
    }
}
int *ft_rev_int_tab(int *tab, int size)
{  
    int p1;
    int p2;

    p1 = 0;
    p2 = size - 1;
    while(p1 < p2)
    {
        ft_swap(tab[p1], tab[p2]);
        p1++;
        p2--;
    }
    return(tab);
}
int *ft_sort_int_tab(int *tab , int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while(i < size - i - 1)
        {
            if(tab[i] > tab[j + 1])
            {
                ft_swap(tab[i], tab[j + 1]);
            }
            j++;
        }
        i++;
    }
    return(tab);
}
int *ft_sort_int_tab2(int *tab , int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while(i < size - i - 1)
        {
            if(tab[i] < tab[j + 1])
            {
                ft_swap(tab[i], tab[j + 1]);
            }
            j++;
        }
        i++;
    }
    return(tab);
}
int main(int argc, char **argv)
{
    int tab[100];
    int size;

    if (argc == 3)
    {
        size = 0;
        atoi(argv[1], tab, &size);
        if(argv[2][0] == '0')
        {
            putnbr_tab(ft_sort_int_tab(tab, size), size);
        }
        if(argv[2][0] == '2')
        {
            putnbr_tab(ft_rev_int_tab(tab , size), size);
        }
        if(argv[2][0] == '1')
        {
            putnbr_tab(ft_sort_int_tab2(tab , size), size);
        }
    }
}