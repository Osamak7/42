#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main (void)
{
    int x= 5;
    int y= 6;
    
    ft_swap(&x, &y);
    return 0;
}