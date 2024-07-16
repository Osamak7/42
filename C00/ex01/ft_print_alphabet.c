#include <unistd.h>
#include <sys/stat.h>


void ft_print_alphabet(void){

	char alphabet= 'a';
	
	while (alphabet < 123){	
		
		write(1, &alphabet , 1);
		++alphabet;	
	}
}
