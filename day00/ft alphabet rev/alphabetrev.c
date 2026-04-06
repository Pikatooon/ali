#include <unistd.h>

void ft_printalhpabetrev()
{
    char i = 'z';

    while (i > 'a')
    {
        write(1, &i, 1);
        i--;
    }
    write(1, "\n", 1);
}
int main()
{
    ft_printalhpabetrev();
}