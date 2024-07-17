#include <unistd.h>

int ft_strlen(char *str)
{
    int num_car;
    num_car= 0;
    while(str[num_car] != 0)
    {
        num_car++;

    }
    return(num_car);
}