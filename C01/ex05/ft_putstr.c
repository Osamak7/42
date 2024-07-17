#include <unistd.h>
#include <sys/stat.h>



void    print_voc(char v)
{
    write(1, &v, 1);
}

void ft_putstr(char *str)
{
    int i;
    i=0;

    while(str[i] != 0 )
    {
        
        print_voc(str[i]);
        i++;
        
    }
}

