void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace)
{   
    int iter = 0;
    while (origin[iter] != '\0')
    {    
        iter++;
    }
    for (int i = 0; i <= iter; i++)
    {
        
        if (origin[i] == toFind)
        {
            print_char(toReplace);
        }
        else
        {
            print_char(origin[i]);
        }
    }
}

 #include <stdio.h>

 int main(int ac, char **av)
 {
 char str[] = "bienvenue à epitech !";
 printf("%s\n", my_char_replace(str, 'e', 'a'));
 return 0;
 }