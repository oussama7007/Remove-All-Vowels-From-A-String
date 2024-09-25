#include <stdio.h>
int main()
{
    char str[] = {" hello how are you \n"};
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == 'i' || str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'o' )
        {
            int j = i+1;
            str[i] = str[j];             
        }
        
        i++;
    }
    i = 0;
    

while (str[i] != '\0')
{
    printf("%c", str[i]);
    i++;
}
}
