#include <unistd.h>

int	ft_strlen(char *str)
{
    int l = 0;

    while(str[l] != '\0')
    {
        l++;
    }
    return l;
}

int main(int)
{
    return ft_strlen("ciao");
    
}