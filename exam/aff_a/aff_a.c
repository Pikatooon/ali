#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 1)
    {
        while(argv[1][i] && argv[1][i] >= 'a' && argv[1][i] <= 'z' && argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
        {
            if(argv[0][i] == 'a' || argv[1][i] == 'a')
            {
                write(1, "a\n", 1);
            }
            else
            {
                write(1 ,"\n", 1);
            }
            i++;
        }
    }
    write(1, "a\n", 1);
}