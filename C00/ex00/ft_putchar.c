#include <unistd.h>
#include <sys/stat.h>

void ft_putchar(char c){
	
	write(1, &c , 1);
}
