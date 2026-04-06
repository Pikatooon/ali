#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    //int c;
   // c = *a;
   // *a = *b;
   // *b = c;
   printf("adress of a is %p\n",(void *)a);
    

}    
int main()
{
   int x;
   int y;
   //x = 5;
   //y = 10;
   printf("adres fo x is %p\n", &x);
   ft_swap(&x, &y);

   // printf("value of x is %d\n" ,x);
    //printf("value of y is %d\n", y);
}



