#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i = 0;
    

    while(str[i] != '\0')
    {
        i++;
    }
    write(1, str, i);


    int len = 0;
    char rev_str[i + 1];

    while( i >= 0)
    {
        rev_str[len] += str[i];
        i--;
        len++;
    }
    write(1, "\n", 1);
    write(1, &rev_str, len);
    write(1, "\n", 1);

}

int main(char)
{
    ft_rev_print("amaso");
    return 0;
}