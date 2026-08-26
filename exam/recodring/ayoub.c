#include <unistd.h>
#include <stdio.h>

int atoi(char *str)
{
    int i;
    int result;
    i = 0;
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}
/*void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void ft_rev_int_tab(int *tab, int size)
{
    int p1;
    int p2;

    int *temp;
    p1 = 0;
    p2 = size - 1;

    while (p1 < p2)
    {
        ft_swap(&tab[p1], &tab[p2])
        p1++;
        p2--;
    }
}
void ft_sort_in_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if(tab[j] > tab[j + 1])
            {
                ft_swap(&tab[j] , &tab[j + 1])
            }
            j++;
        }
        i++;
    }
}*/
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if(nb < 2)
    {
        return 0;
    }
    while (i < nb)
    {
        if(nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return (1);
}
int main(int argc, char **argv)
{
    int n;

    if (argc != 2)
        return (0);

    n = atoi(argv[1]);

    while (ft_is_prime(n) == 0)
    {
        n++;
    }

    printf("%d\n", n);
    return (0);
}




