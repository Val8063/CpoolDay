void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace)
{   
    int iter = 0;
    while (origin[iter] != '\0')
    {    
         if (origin[iter] == toFind)
        {
            origin[iter]=toReplace;
        }
        iter++;
    }
    return origin;
       
    
}

 #include <stdio.h>

 int main(int ac, char **av)
 {
 char str[] = "bienvenue à epitech !";
 printf("%s\n", my_char_replace(str, 'e', 'a'));
 return 0;
 }