#include <unistd.h>

int main(int argc , char **argv)
{
	int i;
	int j;
	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			int repeat = argv[1][i] - 'a' + 1;
			j = 0;
			while(j < repeat)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
}
