#include <unistd.h>
#include <sys/stat.h>

void write_digit(char digit) {
    write(1, &digit, 1);
}

void write_number(short num) {
    char tens = '0' + num / 10;
    char units = '0' + num % 10;
    write_digit(tens);
    write_digit(units);
}

void ft_print_comb2(void) {
    short i = 0, j;

    while (i <= 98) {
        j = i + 1;
        while (j <= 99) {
            write_number(i);
            write(1, " ", 1);
            write_number(j);
            if (i != 98 || j != 99) {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
    
}

