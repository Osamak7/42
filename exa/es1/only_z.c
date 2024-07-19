#include <unistd.h>

void    character(char a)
{
    write(1, &a, 1);
}
int main(void)
{
    character('z');
    return  0;
}