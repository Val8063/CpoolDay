void print_char(char c);

void my_print_revert(char *toRevert)
{
    int iter = 0;
    while (toRevert[iter] != '\0')
    {
        iter++;
    }
    for (int i = iter; i >= 0; i--)
    {
        print_char(toRevert[i]);
    }    
}