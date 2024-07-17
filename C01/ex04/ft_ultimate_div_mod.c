
void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int res;

    div = *a / *b;
    res = *a % *b;
    *a = div;
    *b= res;
}